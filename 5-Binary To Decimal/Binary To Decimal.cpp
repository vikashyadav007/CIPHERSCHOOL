#include<iostream>
using namespace std;

int binToDec(int num){
    int dec=0;
    int temp=num;
    int len=0;
    int base=1;
    while(temp>0){
        int a= temp%10;
        dec +=a*base;
        len++;
        base *=2;
        temp=temp/10;
    }
    return dec;

}

int main(){
    int N;
    cin>>N;
    cout<<binToDec(N);
}