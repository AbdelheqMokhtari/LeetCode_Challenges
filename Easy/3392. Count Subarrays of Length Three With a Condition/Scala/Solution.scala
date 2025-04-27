object Solution {
    def countSubarrays(nums: Array[Int]): Int = {
        var count = 0;
        var n = nums.length;
        for (i<-1 until n-1){
            if(nums(i) == (nums(i-1) + nums(i+1)) * 2){
                count += 1;
            }
        }
        return count;
    }
}