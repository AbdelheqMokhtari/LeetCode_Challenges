object Main{
    def getConcatenation(nums: Array[Int]): Array[Int] = {

        val n = nums.length
        val ans = new Array[Int](n * 2)
        for (i <- 0 until n){
            ans(i) = nums(i)
            ans(i + n) = nums(i)
        }
        return ans
    }

    def main(args: Array[String]): Unit = {
        println("Hello World!!")
        // Test Case 1
        val nums = Array(1,2,3)
        val results = getConcatenation(nums)
        println(results.mkString(", "))

        // Test Case 2
        val nums2 = Array(1,3,2,1)
        val results2 = getConcatenation(nums2)
        println(results2.mkString(", "))
    }
}