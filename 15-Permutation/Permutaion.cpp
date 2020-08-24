#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

 void permuteHelper(vector<int> &nums,int itr,vector<vector<int>> &result){
        if(itr>=nums.size()){
            vector<int> inter (nums.begin(),nums.end());
            result.push_back(inter);
            return;
        }
        for(int l=itr;l<nums.size();l++){
            swap(nums[l],nums[itr]);
            permuteHelper(nums,itr+1,result);
            swap(nums[l],nums[itr]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permuteHelper(nums,0,result);
        return result;
    }

int main(){
    int N;
    cin>>N;
    vector<int> nums(N);
    for(int i=0;i<N;i++){
        cin>>nums[i];
    }

    vector<vector<int>> result = permute(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
}