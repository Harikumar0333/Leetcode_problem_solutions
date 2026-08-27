/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* res = malloc(sizeof(int) * nums1Size);
    int count = 0;
    for(int i = 0;i<nums1Size ; i++)
    {
        for(int j=0;j<nums2Size ; j++)
        {
            if(nums1[i] == nums2[j])
            {
                int flag = 0;
                for(int k = 0 ;k < count ;k++)
                {
                    if(nums1[i] == res[k])
                    {
                        flag = 1;
                    }
                }
                if(flag == 0)
                {
                res[count++] = nums1[i];
                break;
                }
            }
        }
    }
    *returnSize = count;
    return res;
}