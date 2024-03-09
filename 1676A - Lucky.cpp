#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
int main(){
speedUp;
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>v;
        for (int i = 1; i <= k; ++i)
        {
            if(i%10==3 || i%3==0)
                continue;
            else
                v.push_back(i);
        }
        cout<<v[k]<<endl;
    }
    
    bye;
}