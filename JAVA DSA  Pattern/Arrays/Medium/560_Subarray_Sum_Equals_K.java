import java.util.*;

class Solution {

    public int subarraySum(int[] nums, int k) {

        Map<Integer, Integer> prefixMap =
            new HashMap<>();

        prefixMap.put(0, 1);

        int sum = 0;
        int count = 0;

        for (int num : nums) {

            sum += num;

            if (
                prefixMap.containsKey(sum - k)
            ) {
                count += prefixMap.get(sum - k);
            }

            prefixMap.put(
                sum,
                prefixMap.getOrDefault(sum, 0) + 1
            );
        }

        return count;
    }
}
