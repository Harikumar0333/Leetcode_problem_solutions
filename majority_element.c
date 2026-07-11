int majorityElement(int* nums, int numsSize) 
{
    int cantidate = nums[0],count = 1;
    for(int i=1;i<numsSize ; i++)
    {
        if(cantidate == nums[i])
            count++;

        else
            count--;

        if(count == 0)
            {
                cantidate = nums[i];
                count = 1;
            }
    }
    return cantidate;
}