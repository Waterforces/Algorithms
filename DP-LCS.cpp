#include<bits/stdc++.h>
using namespace std;
int dp[10005][10005];
string s1,s2,ans;

int main() {
    cin >> s1 >> s2;
    for(int i=1;i<=s1.size();i++) {
        for(int j=1;j<=s2.size();j++) {
            if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    for(int i=s1.size(),j=s2.size();i>0 && j>0;) {
        if(s1[i-1]==s2[j-1]) {
            ans+=s1[i-1];
            i--,j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
    //DP-LCS
}