bool check(int* nums, int numsSize) 
{
        int count = 0 ;
        for(int j = 0 ; j <= numsSize-1 ; j++)
        {
            if(nums[j] > nums[(j+1)%numsSize] )
            count++;
        }
    return count <= 1 ;
}