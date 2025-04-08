import scala.collection.mutable.ListBuffer

object Solution {
    def minimumOperations(nums: Array[Int]): Int = {
        var ans = 0
        val list = ListBuffer(nums: _*)
        while (list.toSet.size != list.size){
            ans += 1
            if(list.size <= 3){
                return ans
            }
            list.remove(0, 3)
        }
        return ans
    }

        def main(args: Array[String]): Unit = {
        val nums1 = Array(1, 2, 3, 4, 2, 3, 3, 5, 7)
        val nums2 = Array(4, 5, 6, 4, 4)
        val nums3 = Array(5, 4, 3, 2, 1)
        val nums4 = Array(1, 2, 3, 4, 5, 6, 7, 8, 9)
        val nums5 = Array(6, 7, 8, 9)

        println(s"Result for nums1: ${minimumOperations(nums1)}")  // Example 1
        println(s"Result for nums2: ${minimumOperations(nums2)}")  // Example 2
        println(s"Result for nums3: ${minimumOperations(nums3)}")  // Example 3
        println(s"Result for nums4: ${minimumOperations(nums4)}")  // Example 4
        println(s"Result for nums5: ${minimumOperations(nums4)}")  // Example 4
    }
}