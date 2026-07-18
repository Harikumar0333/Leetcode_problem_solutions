bool isIsomorphic(char* s, char* t) {
  char freq1[256] = {0};
  char freq2[256] = {0};

    int i=0;

  while(s[i]!= '\0')
  {
    char ch1 = s[i];
    char ch2 = t[i];
    if(freq1[ch1] == 0 && freq2[ch2] == 0)
    {
    freq1[ch1] = ch2;
    freq2[ch2] = ch1;
    }

    else if(freq1[ch1] != ch2 || freq2[ch2] != ch1)
        return false;

    i++;
  }
  return true;
}