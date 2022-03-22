// smallest element max heap

priority_queue<int,vector<int>,greater<int>> pq;
  
        for (int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for (int j=k;j<nums.size();j++){
            if (nums[j]>pq.top()){
                pq.pop();
                pq.push(nums[j]);
            }
        }
       int ans=pq.top();
        return ans;






// largest element using min heap

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
  
        for (int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for (int j=k;j<nums.size();j++){
            if (nums[j]>pq.top()){
                pq.pop();
                pq.push(nums[j]);
            }
        }
       int ans=pq.top();
        return ans;
    }
};
