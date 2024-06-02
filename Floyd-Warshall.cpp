#include<bits/stdc++.h>
using namespace std;
int n,m,dis[100][100];

int main() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==j) dis[i][j]=0;
            else dis[i][j]=INT_MAX;
        }
    }
    for(int i=0;i<m;i++) {
        int a,b,w;
        cin >> a >> b >> w;
        dis[a][b]=w;
    }
    for(int k=1;k<=n;k++) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<n;j++) {
                if(i==j || dis[i][k]==INT_MAX || dis[k][j]==INT_MAX) continue ;
                if(dis[i][j]>dis[i][k]+dis[k][j]) dis[i][j]=dis[i][k]+dis[k][j];
            }
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(dis[i][j]==INT_MAX) cout << "& ";
            else cout << dis[i][j] << " ";
        }
        cout << "\n";
    }
    //Floyd-Warshall
}