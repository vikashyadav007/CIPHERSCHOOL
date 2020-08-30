class Solution {
public:
    //Approach 1
//     vector<int> sortedSquares(vector<int>& A) {
//         vector<int> result;
        
//         for(int i=0;i<A.size();i++){
//             result.push_back(A[i]*A[i]);
//         }
//         sort(result.begin(),result.end());
//         return result;
//     }
    //Approach 2
     vector<int> sortedSquares(vector<int>& A) {
        vector<int> result;
        
        int index=-1;
        int size=A.size();
        for(int i=0;i<size;i++){
             if(A[i]<0){
                 index=i;
             }else{
                 break;
             }
         }
         
        int i=index;
        int j=index+1;
        while(i>=0 && j<size){
            
            if((A[i]*-1)<A[j]){
                result.push_back(A[i]*A[i]);
                i--;
            }else{
                result.push_back(A[j]*A[j]);
                j++;
            }
        }
         while(i>=0){
              result.push_back(A[i]*A[i]);
                i--;
         }
         while(j<size){
              result.push_back(A[j]*A[j]);
                j++;
         }
         return result;
    }
};
