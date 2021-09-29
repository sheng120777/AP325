#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int coin[4]={50,10,5,1};

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ans=0;
        int k;
        cin>>k;
        while(k!=0){
            for(int j=0;j<4;j++){
                ans+=k/coin[j];
                k%=coin[j];
            }
        }
        cout<<ans<<endl;
    }
}
