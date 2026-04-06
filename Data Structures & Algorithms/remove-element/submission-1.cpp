class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int>tmp;
        for(auto x:nums){
            if(x!=val){
                tmp.push_back(x);
            }
        }
        for(int i=0;i<tmp.size();i++){
            nums[i]=tmp[i];
        }
        return tmp.size();
    }
};