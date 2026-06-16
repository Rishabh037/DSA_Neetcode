class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Better sorting with 2 pointer TC_O(n^2) with SC_O(1)
        int n = nums.size();

        vector <pair<int,int>> a;
        for(int i = 0 ; i < n ; i++){
            a.push_back({nums[i],i});
        }

        sort(a.begin(),a.end());

        int i = 0, j = n - 1;
        while(i < j){
            int curval = a[i].first + a[j].first;
            if(curval == target){
                return {min(a[i].second,a[j].second),max(a[i].second,a[j].second)};
            } else if (curval < target){
                i++;
            } else{
                j--;
            }
        }

        return {};
    }
};
