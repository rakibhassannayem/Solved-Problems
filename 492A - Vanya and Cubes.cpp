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
    int n,t=0,c=0,i;
    cin>>n;
    for(i=1; n>0; i++){
        t+=i;
        if(n>=t)
        c++;
        n-=t;
        //cout<<"t= "<<t<<" n= "<<n<<" c= "<<c<<endl;
    }
    cout<<c<<endl;
    bye;
}
