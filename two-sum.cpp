class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        vector<int> number;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(map.find(x)!=map.end())
            {
                number.push_back(map[x]);
                number.push_back(i);
            }
            else
            {
                map[nums[i]]=i;
            }
        }
        return number;
    }
};
