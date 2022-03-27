class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writepointer = 0, readpointer = 0;
        while(readpointer < nums.size()){
            if(nums[readpointer] != 0){
                // nums[writepointer++] = nums[readpointer++];
                swap(nums[writepointer++], nums[readpointer++]); // we can use above expression but use below for loop
            }
            else{
                readpointer++;
            }
        }
        // for(int i = writepointer; i < nums.size(); i++)
        //     nums[i] = 0;
    }
};
