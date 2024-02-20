#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int r,c,i,j,n,ar[5][5];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(ar[i][j]==1)
            {
                ar[i][j]=0;
                r=i;
                c=j;
            }
        }
    }
    cout<<abs(2-r)+abs(2-c)<<endl;

    return 0;
}
