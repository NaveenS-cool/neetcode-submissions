class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        map<int,int> int_map;

        for(int i : nums)
        {
            if(!int_map.count(i))
            {
                int_map.insert({i,1});
            }
            else
            {
                int_map[i] ++;
                if(int_map[i]>1)
                {
                    return true;
                }
            }
        }
        return false;
    }
};