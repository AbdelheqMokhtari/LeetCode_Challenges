object Main {
    def longestConsecutive(nums: Array[Int]): Int = {
        var maximum = 0
        val mySet = nums.toSet

        for (elem <- mySet){
            // Try to find the beginning of the element
            if(!mySet.contains(elem-1)){
                var actual = 1

                while(mySet.contains(elem+actual)){
                    actual += 1
                }

                if (maximum < actual){
                    maximum = actual
                }
            
            }

        }

        return maximum
    }

    def main(args: Array[String]): Unit = {
        val nums1 = Array(100, 4, 200, 1, 3, 2)
        val nums2 = Array(0, 3, 7, 2, 5, 8, 4, 6, 0, 1)
        val nums3 = Array(1, 0, 1, 2)

        println(longestConsecutive(nums1))
        println(longestConsecutive(nums2))
        println(longestConsecutive(nums3))
    }
}