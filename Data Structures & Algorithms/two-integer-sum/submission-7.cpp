class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector <pair<int,int>> A;
        for(int i = 0; i<n; i ++){
            A.push_back({nums[i],i});
        }

        sort(A.begin(),A.end());

        int i = 0 , j = n-1;
        while(i < j){
            int currsum = A[i].first + A[j].first;
            if(currsum == target){
                return {min(A[i].second , A[j].second),max(A[i].second , A[j].second)};
            } else if (currsum < target){
                i++;
            }else{
                j--;
            }
        }

        return {};
    }
};
