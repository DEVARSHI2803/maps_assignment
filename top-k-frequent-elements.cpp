class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> total;
        unordered_map<int,int> reverse;
        vector<int>final;
        for(int i=0;i<nums.size();i++)
        {
            total[nums[i]]++;
        }
        vector<pair<int,int>> Sort(total.begin(),total.end());
        sort(Sort.begin(),Sort.end(),[](const auto& a, const auto& b)
        {
            return a.second>b.second;
        });
        for(int i=0;i<k;i++)
        {
            final.push_back(Sort[i].first);
        }
        return final;
    }
};
