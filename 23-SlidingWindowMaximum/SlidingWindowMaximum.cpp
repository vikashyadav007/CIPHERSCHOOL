class Solution {
public:
    
//     int getMax(vector<int>& nums,int s,int k){
//          int max=-9999;
//         int e= s+k;
//          for(int i=s;i<e;i++){
//              if(nums[i]>max){
//                  max = nums[i];
//              }
//          }
//         return max;
//     }
    
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         // if(k<=1) return nums;
//         int size=nums.size();
//         vector<int> result;
     
//         for(int i=0;i<size-k+1;i++){
//            int max = getMax(nums,i,k);
//             result.push_back(max);
//         }
//         return result;
//     }
    
    
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
        }
        ans.push_back(pq.top().first);
        for(int i=k;i<nums.size();i++){
            pq.push({nums[i],i});
            if(pq.top().second < i-k+1){
                while(pq.top().second < i-k+1){
                    pq.pop();
                }
                ans.push_back(pq.top().first);
            }else{
                ans.push_back(pq.top().first);
            }
        }
        return ans;
    }
    
};
