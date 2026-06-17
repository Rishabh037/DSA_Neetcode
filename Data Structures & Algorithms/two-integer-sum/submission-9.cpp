class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // Hashing 1 pass
        unordered_map <int,int> a;
        for(int i = 0 ; i < n ; i++){
            int diff = target - nums[i];
            if(a.find(diff) != a.end()){
                return {a[diff],i};
            }
            a.insert({nums[i],i});
        }

        return {};
    }
};
