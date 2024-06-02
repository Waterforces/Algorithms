#include<bits/stdc++.h>
using namespace std;
char s[105][105];
bool visited[105][105];
int n,m,sum,c,_max;

void flood(int x,int y) {
    if(x<0 || y<0 || x>=n || y>=m || visited[x][y] || s[x][y]=='X') return ;
    c++;
    visited[x][y]=true;
    flood(x,y+1);
    flood(x,y-1);
    flood(x+1,y);
    flood(x-1,y);
}

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> s[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            c=0;
            if(s[i][j]=='O') {
                if(visited[i][j]) continue ;
                sum++;
                flood(i,j);
                _max=max(_max,c);
            }
        }
    }
    cout << sum << " " << _max;
    //Floodfill
}