#include<iostream>
using namespace std;

int pow(int a,int b){
    int mul=1;
    for(int i=0;i<b;i++){
        mul *=a;
    }
    return mul;
}

int main(){
    int N;
    cin>>N;
    int temp=N;
    int num=0;
    int len=0;
     while(temp>0){ 
        temp = temp/10;
        len++;
    }
    temp=N;
    while(temp>0){
        int a = temp%10;
        num += pow(a,len);
        temp = temp/10;
    }
    if(num==N){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    }
    