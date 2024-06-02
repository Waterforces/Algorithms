#include<bits/stdc++.h>
using namespace std;
int n,k,bs[10005];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> bs[i];
    cin >> k;
    for(int i=0;i<k;i++) {
        int q,low=0,high=n-1;
        cin >> q;
        while(true) {
            int mid=(low+high)/2;
            if(bs[mid]==q) {
                cout << mid << "\n";
                break ;
            }
            if(bs[mid]>q) high=mid-1;
            else low=mid+1;
        }
    }
    //Binary-Search
}