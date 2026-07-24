bool backspaceCompare(char* s, char* t) {
    int len = strlen(s);
    int len1 = strlen(t);

    char arr1[len+1];
    char arr2[len1+1];


    int i=0,n=0,m=0;

    while(s[i])
    {
        if(isalpha(s[i]))
            arr1[n++] = s[i];

        else if(n != 0)
            --n;

        i++;
    }

    int j=0;

    while(t[j])
    {
        if(isalpha(t[j]))
            arr2[m++] = t[j];
        
        else if(m != 0)
            --m;

            j++;
    }

    arr1[n] = '\0';
    arr2[m] = '\0';

    if(strcmp(arr1,arr2) == 0)
        return true;

    else
        return false;

}