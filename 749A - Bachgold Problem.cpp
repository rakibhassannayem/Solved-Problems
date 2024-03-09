#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
bool prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;break;
        }
    }return 1;
}
int main(){
speedUp;
    int n,c=0;
    cin>>n;
    int n2=n/2;
    cout<<n2<<endl;
    if(n%2==0)
        cout<<2<<" ";
    else
        cout<<3<<" ";
    for(int i=0; i<n2-1; i++)
        cout<<2<<" ";
    
    bye;
}
