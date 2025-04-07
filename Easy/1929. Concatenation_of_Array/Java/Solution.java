class Solution {
    public int[] getConcatenation(int[] nums) {
        short n = (short) nums.length;
        int[] ans = new int[n*2];
        for(int i=0;i<n;i++){
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }

        // Main method for testing
    public static void main(String[] args) {
        Solution sol = new Solution();
        
        // Test Case 1
        int[] input1 = {1, 2, 1};
        int[] output1 = sol.getConcatenation(input1);
        System.out.println("Test Case 1: " + arrayToString(output1));

        // Test Case 2 (Empty array)
        int[] input2 = {};
        int[] output2 = sol.getConcatenation(input2);
        System.out.println("Test Case 2: " + arrayToString(output2));

        // Test Case 3 (Single element)
        int[] input3 = {5};
        int[] output3 = sol.getConcatenation(input3);
        System.out.println("Test Case 3: " + arrayToString(output3));
    }

    // Helper method to convert array to string
    private static String arrayToString(int[] arr) {
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        for (int i = 0; i < arr.length; i++) {
            sb.append(arr[i]);
            if (i < arr.length - 1) sb.append(", ");
        }
        sb.append("]");
        return sb.toString();
    }
}