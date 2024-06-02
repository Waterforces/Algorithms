#include<bits/stdc++.h>
using namespace std;
int n,m,dp[10005],coin[1000];

int main() {
    cin >> n >> m;
    for(int i=1;i<=m;i++) dp[i]=INT_MAX;
    for(int i=0;i<n;i++) cin >> coin[i];
    for(int i=0;i<=m;i++) {
        for(int j=0;j<n;j++) {
            if(i+coin[j]>m) continue ;
            dp[i+coin[j]]=min(dp[i+coin[j]],dp[i]+1);
        }
    } 
    cout << dp[m];
    // DP-Coin Change
}