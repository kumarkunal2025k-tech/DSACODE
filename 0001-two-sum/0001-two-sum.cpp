class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n1=nums.size();
        for(int i=0;i<n1;i++){
            for(int j=i+1;j<n1;j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
            }
        }
        return{};
    }
};