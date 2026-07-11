int maxArea(int* height, int heightSize) 
{
    int left =0;
    int right = heightSize-1;
    int max=0;
    while(left < right)
    {
        int num = (height[left] < height[right] ? height[left] : height[right] ) *(right - left );
        
    if(max < num)
        max = num;

        if(height[left]<height[right])
            left ++;

        else
            right--;
    }
    return max;
}