#include<bits/stdc++.h>
using namespace std;
typedef struct node {
    int l=-1,r=-1;
} node;
node x[10005];
int n,root;

void inorder(int cur) {
    if(x[cur].l!=-1) inorder(x[cur].l);
    cout << cur << " ";
    if(x[cur].r!=-1) inorder(x[cur].r);
}

int main() {
    cin >> n >> root;
    for(int i=1;i<n;i++) {
        int val,cur=root;
        cin >> val;
        while(true) {
            if(val<cur) {
                if(x[cur].l==-1) {
                    x[cur].l=val;
                    break ;
                }
                cur=x[cur].l;
                continue ;
            }
            else {
                if(x[cur].r==-1) {
                    x[cur].r=val;
                    break ;
                }
                cur=x[cur].r;
                continue ;
            }
        }
    }
    inorder(root);
    //BS-Tree
}