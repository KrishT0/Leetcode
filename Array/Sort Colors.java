class Solution {

    public void sortColors(int[] nums) {

        for(int j = 1 ; j < nums.length ; j++){

            for(int i = 0 ; i < nums.length ; i++){

                if(nums[j] < nums[i]){

                    int temp = nums[j];

                    nums[j] = nums[i];

                    nums[i] = temp;
                }

            }

        }

    }
    
}