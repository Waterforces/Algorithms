#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
typedef struct node{
    vector<pii> v;
    bool visited;
} node;
node x[200005];
int n,e,sum;
priority_queue<pii, vector<pii>, greater<pii> > pq;

int main() {
    cin >> n >> e;
    for(int i=0;i<e;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        x[a].v.push_back({b,w});
        x[b].v.push_back({a,w});
    }
    pq.push({0,1});
    while(!pq.empty()) {
        auto [dis,cur]=pq.top();
        pq.pop();
        if(x[cur].visited) continue ;
        x[cur].visited=true ;
        sum+=dis-1;
        for(auto [next,ndis]: x[cur].v) {
            if(x[next].visited) continue ;
            pq.push({ndis,next});
        }
    }
    cout << sum+1;
    //MST-Prim
}