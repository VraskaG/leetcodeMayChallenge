class Solution {
public:
    bool isPerfectSquare(int num) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for (long long int i = 1; i * i <= num; i++) { 
            if ((num % i == 0) && (num / i == i)) { 
                return true; 
        } 
    } 
    return false; 
    }
};
