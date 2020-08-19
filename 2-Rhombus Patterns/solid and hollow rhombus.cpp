#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    cout<<"Solid Rhombus\n";
    for(int i=0;i<N;i++){
        for(int j=N-i-1;j>0;j--){
            cout<<" ";
        }
        for(int i=0;i<N;i++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"Hollow Rhombus\n";
    for(int i=0;i<N;i++){
        for(int j=N-i-1;j>0;j--){
            cout<<" ";
        }
        if(i==0 || i==N-1){
            for(int i=0;i<N;i++){
                cout<<"*";
            }
        }else{
            cout<<"*";
            for(int i=0;i<N-2;i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
}