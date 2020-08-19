#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int mid = N/2;
    for(int i=0;i<N;i++){
        if(i<mid){
            cout<<"* ";
            for(int j=0;j<mid-1;j++){
                cout<<"  ";
            }
            cout<<"* ";
            if(i==0){
                 for(int j=0;j<mid;j++){
                cout<<"* ";
            }
            }
        }else
        if(i==mid){
            for(int j=0;j<N;j++){
                cout<<"* ";
            }
        }else
        if(i>mid){
            if(i==N-1){
                for(int j=0;j<mid;j++){
                    cout<<"* ";
                }
            }else{
                for(int j=0;j<mid;j++){
                    cout<<"  ";
                }
            }
            cout<<"* ";
            for(int j=0;j<mid-1;j++){
                    cout<<"  ";
                }
           cout<<"* ";
        }

        cout<<"\n";
    }
}