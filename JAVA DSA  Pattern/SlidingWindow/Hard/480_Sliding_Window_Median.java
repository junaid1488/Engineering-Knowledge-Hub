import java.util.*;

class Solution {

    public double[] medianSlidingWindow(
        int[] nums,
        int k
    ) {

        double[] ans =
            new double[
                nums.length - k + 1
            ];

        TreeMap<Integer, Integer> low =
            new TreeMap<>();

        TreeMap<Integer, Integer> high =
            new TreeMap<>();

        int lowSize = 0;
        int highSize = 0;

        for (int i = 0; i < nums.length; i++) {

            if (
                low.isEmpty() ||
                nums[i] <= low.lastKey()
            ) {

                low.put(
                    nums[i],
                    low.getOrDefault(
                        nums[i],
                        0
                    ) + 1
                );

                lowSize++;

            } else {

                high.put(
                    nums[i],
                    high.getOrDefault(
                        nums[i],
                        0
                    ) + 1
                );

                highSize++;
            }

            while (
                lowSize > highSize + 1
            ) {

                int val = low.lastKey();

                remove(low, val);

                high.put(
                    val,
                    high.getOrDefault(
                        val,
                        0
                    ) + 1
                );

                lowSize--;
                highSize++;
            }

            while (
                lowSize < highSize
            ) {

                int val = high.firstKey();

                remove(high, val);

                low.put(
                    val,
                    low.getOrDefault(
                        val,
                        0
                    ) + 1
                );

                lowSize++;
                highSize--;
            }

            if (i >= k) {

                int out =
                    nums[i - k];

                if (
                    low.containsKey(out)
                ) {

                    remove(low, out);

                    lowSize--;

                } else {

                    remove(high, out);

                    highSize--;
                }

                while (
                    lowSize > highSize + 1
                ) {

                    int val =
                        low.lastKey();

                    remove(low, val);

                    high.put(
                        val,
                        high.getOrDefault(
                            val,
                            0
                        ) + 1
                    );

                    lowSize--;
                    highSize++;
                }

                while (
                    lowSize < highSize
                ) {

                    int val =
                        high.firstKey();

                    remove(high, val);

                    low.put(
                        val,
                        low.getOrDefault(
                            val,
                            0
                        ) + 1
                    );

                    lowSize++;
                    highSize--;
                }
            }

            if (i >= k - 1) {

                if (
                    k % 2 == 1
                ) {

                    ans[
                        i - k + 1
                    ] = low.lastKey();

                } else {

                    ans[
                        i - k + 1
                    ] =
                        (
                            (long) low.lastKey()
                            +
                            high.firstKey()
                        ) / 2.0;
                }
            }
        }

        return ans;
    }

    private void remove(
        TreeMap<Integer, Integer> map,
        int val
    ) {

        if (map.get(val) == 1) {
            map.remove(val);
        } else {
            map.put(
                val,
                map.get(val) - 1
            );
        }
    }
}
