int maxProduct(int n) {
    int count=0;
    int temp=n;
    while(temp)
    {
        temp /= 10;
        count++;
    }

    int arr[count];
    int i=0;
    while(n)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    int max = 0;
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<count;j++)
        {
            if(i != j && arr[i] * arr[j] > max)
            {
                max = arr[i]*arr[j];
            }
        }
    }
    return max;
}