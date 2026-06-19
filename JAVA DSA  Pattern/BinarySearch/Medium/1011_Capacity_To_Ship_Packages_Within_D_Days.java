class Solution {

    public int shipWithinDays(
        int[] weights,
        int days
    ) {

        int left = 0;
        int right = 0;

        for (int w : weights) {

            left = Math.max(
                left,
                w
            );

            right += w;
        }

        while (left < right) {

            int mid =
                left + (right - left) / 2;

            int requiredDays = 1;
            int currentLoad = 0;

            for (int weight : weights) {

                if (
                    currentLoad + weight
                    > mid
                ) {

                    requiredDays++;
                    currentLoad = 0;
                }

                currentLoad += weight;
            }

            if (
                requiredDays <= days
            ) {

                right = mid;

            } else {

                left = mid + 1;
            }
        }

        return left;
    }
}
