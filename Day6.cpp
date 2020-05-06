class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> Occurence;
        for(int i = 0; i < nums.size(); i++)
        {
            Occurence[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(Occurence[nums[i]] > nums.size()/2)
                return nums[i];
        }
        return -1;
    }
};
