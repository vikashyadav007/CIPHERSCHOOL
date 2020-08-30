#include<iostream>
using namespace std;

int **board;

void printBoard(int N){
     for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<< board[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
}


bool isPossible(int row,int col,int N){
    //Same Column
    for(int i=row-1;i>=0;i--){
        if(board[i][col]==1){
            return false;
        }
    }

    //left diagonal
    for(int i=row-1,j=col-1;i>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }

    //right column
    for(int i=row-1,j=col+1;i>=0;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
    return true;
}

int count=0;
void nQueenHelper(int row,int N){
    if(row==N){
        count++;
        printBoard(N);
        return;
    }  
    for(int j=0;j<N;j++){
        if(isPossible(row,j,N)){
            board[row][j]=1;
            nQueenHelper(row+1,N);
            board[row][j]=0;
        }
    }
    return;

}

void nQueen(int N){
    
    nQueenHelper(0,N); 
}

int main(){
    int N;
    cin>>N;
    board = new int*[N];

    for(int i=0;i<N;i++){
        board[i] = new int[N];
        for(int j=0;j<N;j++){
            board[i][j]=0;
        }
    }
    nQueen(N);
    cout<<"Total Possible Ways: "<<count;
}