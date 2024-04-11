#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
const int MAX = 2e5+10;
bool prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;break;
        }
    }return 1;
}
int main(){
speedUp;
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        vector<char> v;
        char ch='a';
        int c=0;
        for (int i = 0; i < n; ++i)
        {
            v.pb(ch);
            ch++;
            c++;
            cout<<v[i];
            if(c==b)
            {
                ch='a';
                c=0;
            }
            
        }
        cout<<endl;
    }
    bye;
}
