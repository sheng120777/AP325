#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>enemy;
    vector<int>our;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        enemy.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        our.push_back(a);
    }
    int ans=0;
    sort(enemy.begin(),enemy.end());
    sort(our.begin(),our.end());
    for(int i=0,j=0;i<n and j<n;i++){
        if(our[i]>enemy[j]){
            ans++;
            j++;
        }
    }
    cout<<ans;
}
