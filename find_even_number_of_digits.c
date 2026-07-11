int findNumbers(int* nums, int numsSize) {
    int even_count = 0,digit_count = 0;
    for(int i=0;i<numsSize;i++)
    {
        digit_count = 0;
        while(nums[i] > 0)
        {
            nums[i] % 10;
            digit_count++;
            nums[i] = nums[i] / 10;
        }
        if(digit_count % 2 == 0)
            even_count++;
    }

    return even_count;
}