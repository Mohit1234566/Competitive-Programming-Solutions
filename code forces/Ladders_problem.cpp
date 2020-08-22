/*Problem Statement : Count the number of ways to r
each the Nth Stair if you can take K steps, for eg if K = 3,
 we can take 1, 2 and 3 steps.
In this webinar link 3 , in the approach discussed by
Prateek Bhaia, of the time complexity O(N) , don’t we
have to compute the initial dp elements upto K? It is ok
to compute the value if K is small, but what if
the K is large for eg K=10?*

*/

 #include <iostream>
using namespace std;

// Recursion
int ways(int n){

    //Ground
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    int ans = ways(n-1) + ways(n-2) + ways(n-3);
    return ans;

}
// Time O(k Power n)
int ways2(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    int ans = 0;
    for(int j=1;j<=k;j++){

        ans += ways2(n-j,k);
    }
    return ans;
}
// Top Down DP - Homework

// Bottom Up Dp O(nk)
int waysBU(int n,int k){

    int *dp = new int[n];

    dp[0] = 1;

    for(int step=1;step<=n;step++){
        dp[step] = 0;

        for(int j=1;j<=k;j++){
            if(step-j>=0){
            dp[step] += dp[step-j];
            }

        }
    }
    return dp[n];
}
// Can we do it in O(n) ?
// Try doing it at home.

int main() {
    int n = 4;
    cout<<ways(n)<<endl;
    cout<<ways2(3,2)<<endl;
    cout<<ways2(4,3)<<endl;

    cout<<ways2(5,4)<<endl;
    cout<<waysBU(5,4)<<endl;

return 0;
}
