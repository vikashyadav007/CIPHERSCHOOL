#include <bits/stdc++. h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int> myMap;
        for(int i=0;i<nums.size();i++){
            if(myMap.count(nums[i])>0){
                myMap.insert({nums[i],myMap[nums[i]]++});
            }else{
                myMap.insert({nums[i],1});
            }
        }
        
        map<int,int>::iterator itr;
        int n = nums.size()/2;
        for(itr=myMap.begin();itr!=myMap.end();itr++){
            if(itr->second>n){
                return itr->first;
            }
        }
        return -1;
        
    }
};