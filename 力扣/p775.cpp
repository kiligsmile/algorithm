// 775. 全局倒置与局部倒置

class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int size=nums.size();
        int minnum=nums[size-1];
        for(int i=size-3;i>=0;i--){
            if(nums[i]>minnum){
                return false;
            }
            minnum=min(minnum,nums[i+1]);
        }
        return true;
    }
};