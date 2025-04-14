object Main {
    def countGoodTriplets(arr: Array[Int], a: Int, b: Int, c: Int): Int = {
        var count = 0
        for (i <- 0 until arr.length - 2) {
            for(j <- i + 1 until arr.length - 1){
                for(k <- j + 1 until arr.length){
                    if ((Math.abs(arr(i) - arr(j)) <= a) && (Math.abs(arr(j)-arr(k)) <= b) && (Math.abs(arr(i) - arr(k)) <= c)) {
                        count += 1
                    }
                }
            }
        }
        return count
    }

    def main(args: Array[String]): Unit = {

        val nums1 = Array(3, 0, 1, 1, 9, 7)
        val nums2 = Array(1, 1, 2, 2, 3)

        val (a1, b1, c1) = (7, 2, 3)
        val (a2, b2, c2) = (0, 0, 1)


        println(countGoodTriplets(nums1,a1,b1,c1))
        println(countGoodTriplets(nums2,a2,b2,c2))
    }
}