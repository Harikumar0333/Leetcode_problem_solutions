bool isvowel(char vowel)
{
    if(vowel == 'a' ||vowel == 'A' ||vowel == 'e' ||vowel == 'E' ||vowel == 'i' ||vowel == 'I' ||vowel == 'o' ||vowel == 'O' ||vowel == 'u' ||vowel == 'U' )
        return true;

    else
        return false;
}

char* reverseVowels(char* s) 
{
    int start = 0;
    int left = strlen(s) -1;

    while(start < left)
    {
        while(start < left && !isvowel(s[start]))
            start++;

        while(start < left && !isvowel(s[left]))
            left--;

        char temp = s[start];
        s[start] = s[left];
        s[left] = temp;

        start++;
        left--;
    }
    return s;
}


