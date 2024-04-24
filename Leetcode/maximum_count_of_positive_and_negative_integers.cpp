class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size(),p=0,r=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
             p++;
            }
            if(nums[i]>0){
                r++;
            }
        }
        return max(p,r);
        
    }
};
