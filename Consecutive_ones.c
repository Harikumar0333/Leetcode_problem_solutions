int findMaxConsecutiveOnes(int* nums, int numsSize) {
  int max=0,curr_size=0;
  for(int i=0;i < numsSize;i++)
  {
    curr_size = 0;
    while(i < numsSize && nums[i] == 1 )
    {
        curr_size++;
        i++;
    }
    if(curr_size > max)
        max = curr_size;
    
  }
  return max;
}