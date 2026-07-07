int removeDuplicates(int* nums, int numsSize) 
{
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        int flag = 0;
        for(int j=0;j<=i;j++)
        {
            if(i!= j && nums[i] == nums[j])
                flag = 1;
        }
        if(flag == 0)
            nums[j++] = nums[i];
    }

    return j;
}