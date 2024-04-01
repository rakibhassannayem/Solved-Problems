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
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); ++i)
    {
    	if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
    	{
    		cout<<" ";
    		i+=2;
    	}
    	else cout<<s[i];
    }

    bye;
}
