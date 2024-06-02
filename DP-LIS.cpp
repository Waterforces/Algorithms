#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a,_size=v.size();
        cin >> a;
        if(_size==0) v.push_back(a);
        else {
            int idx=lower_bound(v.begin(),v.end(),a)-v.begin();
            if(idx>=_size) v.push_back(a);
            else v[idx]=a;
        }
    }
    cout << n-v.size();
    //DP-LIS
}