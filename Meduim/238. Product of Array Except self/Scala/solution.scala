// Time Complexity O(N) (No Nested Loops).
// Space Complecity O(3N) = O(N) (three aditional lists).
// Approach used: Prefix and Suffix Product Arrays.
// Data Structures : Arrays 

object Main {
    def productExceptSelf(nums: Array[Int]): Array[Int] = {
        val n = nums.length;
        val ans = new Array[Int](n)
        val preffix = new Array[Int](n-1)
        val suffix = new Array[Int](n-1)

        preffix(0) = nums(0)
        suffix(n-2) = nums(n-1)

        for (i <- 1 until (n-1)){
            preffix(i) = preffix(i-1) * nums (i)
            suffix(n-i-2) = suffix (n-i-1) * nums (n-i-1)
        }

        ans(0) = suffix(0)
        ans(n-1) = preffix(n-2)

        for (i <- 1 until (n-1)){
            ans(i) = preffix(i-1) * suffix(i)
        }

        return ans
    }

    def main(args: Array[String]): Unit = {
        val nums1 = Array(1, 2, 3, 4)
        val nums2 = Array(-1, 1, 0, -3, 3)

        println(productExceptSelf(nums1).mkString(", "))
        println(productExceptSelf(nums2).mkString(", "))
    }

}