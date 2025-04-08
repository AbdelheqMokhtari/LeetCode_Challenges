// Time Complexity: O(N²)
// Space Complexity: O(N)

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

class BruteForce {
    public int minimumOperations(int[] nums) {
        short ans = 0;
        List<Integer> list = new ArrayList<>();
        for (int num : nums) {
            list.add(num);  // Add each element of the array to the list
        }
        Set<Integer> set = new HashSet<>(list);

        while(list.size() != set.size()){
            ans+=1;
            if(list.size() <= 3){
                return ans;
            }
            list = list.subList(3, list.size());
            set = new HashSet<>(list);
        }

        return ans;
    }

     public static void main(String[] args) {
        BruteForce solution = new BruteForce();

        // Test case 1
        int[] nums1 = {1, 2, 3, 4, 2, 3, 3, 5, 7};
        System.out.println("Test Case 1: " + solution.minimumOperations(nums1));  // Expected output: 2

        // Test case 2
        int[] nums2 = {4, 5, 6, 4, 4};
        System.out.println("Test Case 2: " + solution.minimumOperations(nums2));  // Expected output: 1

        // Test case 3
        int[] nums3 = {5, 4, 3, 2, 1};
        System.out.println("Test Case 3: " + solution.minimumOperations(nums3));  // Expected output: 0

        // Test case 4
        int[] nums4 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        System.out.println("Test Case 4: " + solution.minimumOperations(nums4));  // Expected output: 0

        // Test case 5
        int[] nums5 = {6, 7, 8, 9};
        System.out.println("Test Case 5: " + solution.minimumOperations(nums5));  // Expected output: 0
    }
}
