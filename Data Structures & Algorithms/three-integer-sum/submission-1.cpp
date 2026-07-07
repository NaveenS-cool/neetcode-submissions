class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> triplets;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
            int left = i+1;
            int right = nums.size() - 1;

            if(i>0 && nums[i] == nums[i-1])  //skipping duplicate i
                continue;
            
            while(left<right)
            {

                if(nums[left] + nums[right] < -nums[i])
                    left++;
                else if(nums[left] + nums[right] > -nums[i])
                    right--;
                else
                {
                    triplets.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;

                    while(left < right && nums[left] == nums[left-1]) //Skip duplicates for left and right
                        left++;
                    while(left < right && nums[right] == nums[right+1])
                        right--;
                }    
            }
        }

        return triplets;
    }
};
