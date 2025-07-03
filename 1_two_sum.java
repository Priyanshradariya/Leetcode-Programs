class Solution {
    public int[] twoSum(int[] nums, int target) {

        int[] output = new int[2];
        int count=0;
        for(int i=0;i<nums.length-1;i++)
        {
            for(int j=i+1;j<nums.length;j++)
            {
                if((nums[i]+nums[j]) == target)
                {
                    output[count] = i;
                    count++;
                    output[count] = j;
                    break;
                }
            }
            
        }
        return output;
    }
}