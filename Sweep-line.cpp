#include<bits/stdc++.h>
using namespace std;
int n,_max,sw[1000005];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        sw[a]++;
        sw[b]--;
    }
    for(int i=0;i<1000005;i++) _max=max(_max,sw[i]+=sw[i-1]);
    cout << _max;
    //Sweep-line
}