char* countAndSay(int n) {
    char* str = malloc(10000);
    char temp[10000];
    strcpy(str,"1");
    int j ,k;

    for(int i=1;i<n;i++)
    {
        j=0,k=0;
        while(str[j] != '\0')
        {
            int count = 1;
            while(str[j] == str[j+1])
            {
                count++;
                j++;
            }
        

        k += sprintf(temp+k , "%d",count);
        temp[k++] = str[j];
        j++;
        }
        temp[k] = '\0';
        strcpy(str,temp);
    }

    return str;
}