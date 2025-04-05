#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int x=1,y=0;
int px[5]={11,13,19,26},py[5]={23,20,12,11};

void dfs(int x,int y){
    if(x>=30 || y>30) return;
    for(int i=0;i<4;i++){
        if(px[i]==x&&py[i]==y){
            cout<<x<<" "<<y<<endl;
            return;
        }
    }
    dfs(x+1,y+2);
    dfs(x+2,y+1);
    return;
}

int main(){
    dfs(x,y);
    return 0;
}
