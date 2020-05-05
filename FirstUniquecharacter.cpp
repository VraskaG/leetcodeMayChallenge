class Solution {
public:
    int firstUniqChar(string s) {
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
