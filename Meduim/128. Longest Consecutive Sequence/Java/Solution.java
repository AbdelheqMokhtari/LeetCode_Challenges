import java.util.HashSet;
import java.util.Set;


class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> mySet = new HashSet<>();
        for(int num : nums){
            mySet.add(num);
        }
        int maxuimum = 0;
        for (int elem: mySet){
            if(!mySet.contains(elem-1)){
                int actual = 1;
                while(mySet.contains(elem+actual)){
                    actual += 1;
                }
                if (actual > maxuimum){
                    maxuimum = actual;
                }
            } 
        }
        
        return maxuimum;
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        
        // Test Case 1
        int[] input1 = {100,4,200,1,3,2};
        int output1 = sol.longestConsecutive(input1);
        System.out.println("Test Case 1: " + output1);

        // Test Case 2
        int[] input2 = {0,3,7,2,5,8,4,6,0,1};
        int output2 = sol.longestConsecutive(input2);
        System.out.println("Test Case 1: " + output2);

        // Test Case 3
        int[] input3 = {1,0,1,2};
        int output3 = sol.longestConsecutive(input3);
        System.out.println("Test Case 3: " + output3);
    }
}