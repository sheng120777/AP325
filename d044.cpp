#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int arr[100005];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=0;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        ans+=prefix;
    }
    cout<<ans;
}
