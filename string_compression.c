#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "aaabbccc";
    int hii = compress(str,8);
}

int compress(char* chars, int charsSize) {
    char str[charsSize];
    int count = 1;
    int j=0;
    for(int i=0;i<charsSize-1;i++)
    {
        count = 1;
        chars[j++] = chars[i];
        while(i < charsSize-1 && chars[i] == chars[i+1])
        {
            count++;
            i++;
        }
        chars[j++] = count+'0';
    }
    chars[j] = '\0';
    printf("%s\n",chars);
    return strlen(chars);
}