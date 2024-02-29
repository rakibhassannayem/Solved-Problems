#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
#define pb push_back
int main(){
speedUp;
    int a,b;
    cin>>a>>b;
    a=max(a,b);
    a=6-(a-1);
    int l=a,h=6;
    for (int i = 2; i < 7; i++) {
      if(a%i==0 && 6%i==0){
        l=a/i;
        h=6/i;
      }
    }
    cout<<l<<"/"<<h<<endl;
    bye;
}
