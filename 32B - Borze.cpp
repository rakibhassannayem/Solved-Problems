#include<bits/stdc++.h>
using namespace std;
#define speedUp ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define bye return 0
int main(){
speedUp;
    string s;
    cin>>s;
    vector<int> v;
    for (int i = 0; i < s.size(); ++i)
    {
        if(s[i]=='.')
            v.push_back(0);
        else
        {
            if(s[i+1]=='.')
                v.push_back(1);
            else
                v.push_back(2);
            i++;
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i];
    }
    
    bye;
}