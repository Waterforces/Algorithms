#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1000];

int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    for(int i=0;i<=n;i++) {
        cout << i << " : ";
        for(int j=0;j<v[i].size();j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    //graph
}