#include<bits/stdc++.h>
using namespace std;

//Using DP
int FibDP(int n , int dp[]){

    if(n==1  || n == 0)
        return n;
    else if(dp[n] != 0)
        return dp[n];
    
    dp[n] = FibDP(n-1 , dp) + FibDP(n-2 , dp);
    return dp[n];
}

int Fib(int n){
    //base case
    if(n == 0 || n == 1)
        return n;
    return Fib(n-1) + Fib(n-2);
}

int main(){

    int n;
    cin>>n;
    int dp[n+1] = {0};
    cout<<FibDP(n , dp)<<endl;

}