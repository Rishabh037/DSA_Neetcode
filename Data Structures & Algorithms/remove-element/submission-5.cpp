class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //brute
       vector <int> temp;
       for(auto n : nums){
        if(n != val)
        temp.push_back(n);
       }

       for(int i = 0 ; i < temp.size();i++){
        nums[i] = temp[i];
       }

       return temp.size();
    }
};