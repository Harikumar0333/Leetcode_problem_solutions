int lengthOfLongestSubstring(char* s) {
    int freq[255] = {0};
    int len = strlen(s);
    int left =0,maxlen=0;
    for(int i = 0 ;i<len ;i++)
    {
        freq[s[i]]++;

        while(freq[s[i]] > 1)
        {
            freq[s[left]]--;
            left++;
        }
        if(maxlen < i-left+1)
            maxlen = i-left+1;
    }
    return maxlen;

}

    