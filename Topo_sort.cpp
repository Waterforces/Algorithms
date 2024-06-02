#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    vector<int> v;
    int sq;
} node;
node x[10005];
int n,e;
queue<int> q;
vector<int> ans;

int main() {
    cin >> n >> e;
    for(int i=0;i<e;i++) {
        int a,b;
        cin >> a >> b;
        x[a].v.push_back(b);
        x[b].sq++;
    }
    for(int i=1;i<=n;i++) {
        if(x[i].sq==0) q.push(i);
    }
    while(!q.empty()) {
        auto k=q.front();
        q.pop();
        ans.push_back(k);
        for(auto i:x[k].v) {
            x[i].sq--;
            if(x[i].sq==0) q.push(i);
        }
    }
    for(auto i: ans) cout << i << " ";
    //Topo_sort
}