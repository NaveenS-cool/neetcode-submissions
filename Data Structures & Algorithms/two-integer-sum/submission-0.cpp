class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> integer_map;

        for(int i=0;i<nums.size();i++)
        {
            if(!integer_map.count(target - nums[i]))
            {
                integer_map.insert({nums[i],i});
            }
            else
                return {integer_map[target-nums[i]],i};
        }
        return {};
    }
};
