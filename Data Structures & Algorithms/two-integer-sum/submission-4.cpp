class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Optimal hashmap 2 pass
        int n = nums.size();

        unordered_map <int,int> idx; //val->idx

        for(int i = 0 ; i < n ; i++){
            idx[nums[i]] = i;
        }

        for(int i = 0 ; i < n ; i++){
            int diff = target - nums[i];
            if(idx.count(diff) && idx[diff] != i) return {i, idx[diff]};
        }

        return {};
    }
};
