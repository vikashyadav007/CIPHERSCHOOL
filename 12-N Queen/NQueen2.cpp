 #include<iostream>
 #include<vector>
 #include<string>
 
 using namespace std;

bool isPossible(int row,int col,int N,vector<string> &board){
    //Same Column
    for(int i=row-1;i>=0;i--){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    //left diagonal
    for(int i=row-1,j=col-1;i>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    //right column
    for(int i=row-1,j=col+1;i>=0;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

 void nQueenHelper(int row,int N,vector<string> &board,vector<vector<string>> &final){
    if(row==N){
        final.push_back(board);
        return;
    }  
    for(int j=0;j<N;j++){
        if(isPossible(row,j,N,board)){
            board[row][j]='Q';
            nQueenHelper(row+1,N,board,final);
            board[row][j]='.';
        }
    }
    return;
}

void createBoard(vector<string> &board,int n){
    for(int i=0;i<n;i++){
        // string temp="";
        // for(int i=0;i<n;i++){
        //     temp +=".";
        // }
        // board.push_back(temp);
        string temp="....";
        board.push_back(temp);

    }       
}
// void printBoard(vector<string> &board,int n){
//     for(int i=0;i<n;i++){
//        cout<<board[i]<<" ";
//     }       
// }

vector<vector<string>> nQueen(int n){
    vector<string> board;
    createBoard(board,n);
    // printBoard(board,n);

    vector<vector<string>> final;
    nQueenHelper(0,n,board,final);
    // temp.push_back(board);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<final[i][j]<<"\n";
        }
        cout<<"\n";
    }
    return final;
}
 
 vector<vector<string>> solveNQueens(int n) {
       return nQueen(n);
}

int main(){
    int N;
    cin>>N;
    solveNQueens(N);
}