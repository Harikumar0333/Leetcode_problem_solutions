int leastInterval(char* tasks, int tasksSize, int n) {
    int freq[26] = {0};

    for(int i=0;i<tasksSize;i++)       //this loop is for inserting the count into the freq array
    {
        freq[tasks[i] - 'A']++;
    }

    int max_freq = 0;
    for(int i=0;i<26;i++)
    {
        if(max_freq < freq[i])
            max_freq = freq[i];
    }
    int max_count = 0;
    for(int i=0;i<26;i++)
    {
        if(max_freq == freq[i])
            max_count++;
    }

    int min_cpu_interval = (max_freq - 1) * (n + 1) + max_count;    

    return (min_cpu_interval > tasksSize) ? min_cpu_interval : tasksSize ;
}