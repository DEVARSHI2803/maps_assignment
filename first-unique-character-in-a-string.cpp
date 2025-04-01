class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> total;
        for(int i=0;i<s.length();i++)
        {
            total[s[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
       if(total[s[i]]==1)
            {
            return i;
            }
        }
        return -1;
    }
};
