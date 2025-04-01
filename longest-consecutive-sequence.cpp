class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int highest=1;
        if(nums.size()==0)
        {
            return 0;
        }
        map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
           map[nums[i]]=i;
        }
        for(auto it: map)
        {
            if(map.find(it.first-1)==map.end())
            {
                int count=1;
                int x=it.first;
                while(map.find(x+1)!=map.end())
                {
                    count++;
                    x++;
                }
                if(count>highest){
                    highest=count;
                }
            }
        }
        return highest;
    }
};
