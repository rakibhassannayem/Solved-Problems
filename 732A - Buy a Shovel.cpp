#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
int main(){
speedUp;
    int k,r;
    cin>>k>>r;
    int c=1,p=k;
    while(true){
        if(k%10==0 || ((k-r)%10==0))
            break;
        else{
            c++;
            k=p*c;
        }
    }
    cout<<c<<endl;
    
    bye;
}