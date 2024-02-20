#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
int main(){
speedUp;
    int n;
    cin>>n;
    if(n%2==0)
        cout<<4<<" "<<n-4<<endl;
    else
        cout<<9<<" "<<n-9<<endl;
    
    bye;
}