import java.util.*;

class Solution {

    public boolean containsDuplicate(int[] nums) {

        Set<Integer> set = new HashSet<>();

        for (int num : nums) {
//conditional statement
            if (!set.add(num)) {
                return true;
            }
        }

        return false;
    }
}
