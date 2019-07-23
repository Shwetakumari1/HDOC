int birthday(vector<int> s, int d, int m) {
     int sum = 0;
    int r = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i];
        // M is never less than 1
        if (i > m - 1) sum -= s[i - m];
        if (i >= m - 1 && sum == d) r++;
    }
    return r;
}
