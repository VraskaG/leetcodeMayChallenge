class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<char, int> X;
        for(int i = 0; i < s.size(); i++)
        {
            X[s[i]]++;
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(X[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
