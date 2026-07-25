char* reorganizeString(char* s) {
    int freq[26] = {0};

    int i= 0;
    while(s[i])      //increasing the count of char in freq array
    {
        freq[s[i] - 'a']++;
        i++;
    }

    /* to find the max times presented element*/

    int max_freq=0;
    int max_char=0;

    for(int i=0;i<26;i++)
    {
        if(freq[i] > max_freq)
        {
            max_freq = freq[i];
            max_char = i;
        }
    }

    int len = strlen(s);   //length of the string

    if(max_freq > ((len+1)/2))
        return "";


        char *res = malloc(len+1);     //it should be dynamically memory should allocate because it is returning
        int idx = 0;

        while(freq[max_char] > 0)           //max char is original character and with - of 'a'
        {
            res[idx] = max_char + 'a';
            idx += 2;
            freq[max_char]--;
        }

        for(int i=0;i<26;i++)
        {
            while(freq[i] > 0)
            {
                if(idx >= len)
                    idx = 1;

                res[idx] = i + 'a';
                idx += 2;
                freq[i]--;
            }
        }

        res[len] = '\0';

    

    return res;
}