#include<stdio.h>
int main()
{
    int **arr = mallloc(2 * sizeof(int*));

    for(int i=0;i<3;i++)
    {
        arr[i] = malloc(3 * sizeof(int));
    }
}