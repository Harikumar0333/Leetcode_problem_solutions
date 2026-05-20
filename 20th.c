/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int* ptr=malloc(ASize*sizeof(int));

    for(int i=0;i<ASize;i++)
    {
        int count =0 ;
        for(int j=0;j<=i;j++)
        {
            for(int k = 0;k<=i;k++)
            {
            if(A[k] == B[j])
            count++;
            }
        }
        ptr[i] = count;
    }
    *returnSize = ASize;
    return ptr;
}