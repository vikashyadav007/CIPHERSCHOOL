#include<vector>
#include<iostream>
using namespace std;

bool isPrime(int n){
       for(int i=2;i*i<=n;i++){
           if(n%i==0){
               return false;
           }
       }
       return true;
    }
    
    int countPrimes(int n) {
        vector<bool> sieve(n,true);
        sieve[0]=false;
        sieve[1]=false;
        for(int i=2;i*i<n;i++){
            if(isPrime(i)){
                cout<<"This is Prime"<<i<<endl;
                sieve[i]=true;
                for(int j=i*i;j<n;j+=i){
                    sieve[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(sieve[i]==true){
                cout<<i<<" ";
                count++;
            }
        }
        return count;
    }

int main(){
    int N;
    cin>>N;
    cout<<countPrimes(N);
}