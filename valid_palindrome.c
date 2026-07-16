bool isPalindrome(char* s) {
    int start =0 ; 
    int end = strlen(s)-1;
    int i=0,j=0;
    while(s[i] != '\0')
    {
        if(isalnum(s[i]))
            s[j++] = tolower(s[i]);

            i++;
    }
    s[j] = '\0';
    end = j-1;

    while(start < end)
    {
        if(s[start] != s[end])
            return false;

        start++;
        end--;
    }
    return true;
}
    