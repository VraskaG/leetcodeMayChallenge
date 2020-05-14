class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() <= 1)
        {
            return "0";
        }
          int j;
          for (int i = 0; i < k; i++) 
          {
                for (j = 0; j <= num.size(); j++) 
                {
                    if (num[j] > num[j + 1])
                        break;
                }
                if (num.size() > 0) 
                    num.erase(j, 1);
          }
        while (num.size() > 0 && num[0] == '0') {
            num.erase(0, 1);
        }
        if(num.size() == 0)
            return "0";
        return num;
    }
};
