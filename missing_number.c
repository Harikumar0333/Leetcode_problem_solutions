int missingNumber(int* nums, int numsSize) {
    int sum_of_all_numbers = (numsSize * (numsSize + 1)) / 2;
    int sum=0;

    for(int i = 0 ; i < numsSize ;i++)
    {
        sum += nums[i];
    }

    return sum_of_all_numbers - sum;
}