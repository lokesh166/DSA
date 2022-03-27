class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = -1;
        int count = 0;
        int i;
        
        for(i = 0; i < nums.size(); i++){
            if(count == 0){
                majority = nums[i];
            }
            
            if(majority == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return majority;
    }
};
