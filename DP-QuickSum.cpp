#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,k,a[N],qs[N];

int main() {
    cin >> n >> k;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) qs[i]=qs[i-1]+a[i];
    for(int i=0;i<k;i++) {
        int s,t;
        cin >> s >> t;
        cout << qs[t]-qs[s-1] << "\n";
    }
    //DP-QuickSum
}