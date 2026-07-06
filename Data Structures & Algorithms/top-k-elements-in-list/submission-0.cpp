class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map <int,int> freq_map;

        for(int i: nums)
        {
            if(!freq_map.count(i))
                freq_map.insert({i,1});

            else
                freq_map[i]++;
        }

        vector<vector<int>> bins(nums.size()+1);

        for(auto &p : freq_map)
        {
            bins[p.second].push_back(p.first);
        }

        vector<int> ans;
        for(int i=nums.size();ans.size()<k && i>=1;i--)
        {
            for(int x : bins[i])
            {
                ans.push_back(x);
            }
        }

        return ans;

    }
};
