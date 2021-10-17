#include<bits/stdc++.h> 
using namespace std; 
#define int long long
#define endl "\n"
#define space " "

int n,m;
bool visit[50005]={false};
int w[50005];
vector<int>graph[50005];

int dfs(int s){
    int weight=w[s];
    visit[s]=true;
    for(auto u:graph[s]){
        if(!visit[u]){
            weight+=dfs(u);
        }
    }
    return weight;
}

signed main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int total=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>w[i];
        total += w[i];

    }
    for(int j=0;j<m;j++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int maxw=0;
    for(int i=0;i<n;i++){
        if(!visit[i]){  
            maxw=max(maxw,dfs(i));
        }
    }
    cout<<maxw<<endl;
}   
