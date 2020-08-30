class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();
        vector<bool> result(size,false);
        int max=-9999;
        
        for(int i=0;i<size;i++){
            if(candies[i]>max){
                max = candies[i];
            }
        }
        
        for(int i=0;i<size;i++){
            if(candies[i]+extraCandies >=max){
                result[i]=true;
            }
        }
        return result;
    }
};