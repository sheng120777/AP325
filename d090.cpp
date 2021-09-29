#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int n, m, s;
vector<int> graph[105];
int d[105];

void bfs(int s){
    bool visit[n]={false};
    queue<int>que;
    que.push(s);
    visit[s]=true;
    d[s]=0;
    int cnt=0;
    int total=0;
    while(!que.empty()){
        int v=que.front();
        que.pop();     
        for(int u:graph[v]){
            if(!visit[u]){
                d[u]=d[v]+1;
                visit[u]=1;
                que.push(u);
                cnt++;
                total+=d[u];
            }
        }   
    }
    cout<<cnt<<endl<<total;
}

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>s;
    for(int i=0;i<m;i++){
        int from,to;
        cin>>from>>to;
        graph[from].push_back(to);
    }
    bfs(s);
}
