class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();
        int count=0;
        for(auto x:nums){
            count=0;
            for(auto y:nums){
                if(y==x){
                    count++;
                }
            }
            if(count>n/2){
                return x;
            }
        }
        return -1;
        
    }
};