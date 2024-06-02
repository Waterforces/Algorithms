#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
typedef struct node{
    vector<pii> v;
    int dis=INT_MAX;
} node;
node x[10005];
int n,e,par[10005];
priority_queue<pii, vector<pii>, greater<pii> > pq;

int main() {
    cin >> n >> e;
    for(int i=0;i<e;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        x[a].v.push_back({b,w});
    }
    pq.push({0,1});
    while(!pq.empty()) {
        auto [dis,cur]=pq.top();
        pq.pop();
        if(x[cur].dis<=dis) continue ;
        x[cur].dis=dis;
        for(auto [next,ndis]:x[cur].v) {
            if(x[next].dis<=ndis+dis) continue ;
            par[next]=cur;
            pq.push({ndis+dis,next});
        }
    }
    cout << x[n].dis;
    //Dijkstra
}