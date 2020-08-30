class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascals(numRows);
       if(numRows==0){
       	return pascals;
	   }
       pascals[0].push_back(1);
       for(int i=1;i<numRows;i++){
       	pascals[i].push_back(1);
       	for(int j=1;j<i;j++){
       		pascals[i].push_back(pascals[i-1][j-1]+pascals[i-1][j]);
		   }
       	pascals[i].push_back(1);
	   }
		return pascals;
    }
};
