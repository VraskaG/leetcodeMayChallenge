class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int counter[1001]={0};
        for ( auto x : trust){
            counter[x[0]]--;
            counter[x[1]]++;
        }
        for ( int i = 1; i <= N; i++){
            if (counter[i] == N-1 ) 
                return i;
        }
        return -1;
    }
};
