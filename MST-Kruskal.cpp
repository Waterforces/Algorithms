#include<bits/stdc++.h>
using namespace std;
typedef struct edge {
    int a,b,w;
}edge;
edge x[1000005];
int n,e,h[200005];
long long sum;

int dsu(int cur) {
    if(h[cur]==cur) return cur;
    return h[cur]=dsu(h[cur]);
}

bool cmp(edge a,edge b) {
    return a.w>b.w;
}

int main() {
    cin >> n >> e;
    for(int i=1;i<=n;i++) h[i]=i;
    for(int i=0;i<e;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        x[i]={a,b,w};
    }
    sort(x,x+e,cmp);
    for(int i=0;i<e;i++) {
        auto [a,b,w]=x[i];
        if(dsu(a)==dsu(b)) continue ;
        h[dsu(a)]=dsu(b);
        sum+=w-1;
    }
    cout << sum;
    //MST-Kruskal
}