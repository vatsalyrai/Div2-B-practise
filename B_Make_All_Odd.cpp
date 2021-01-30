#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    { bool hasodd=0;
        int n;
        cin>>n;
        int counteven = 0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                counteven++;
            }
            
        }
         for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                hasodd=1;
                break;
            }
            
        }
        hasodd?cout<<counteven<<endl:cout<<-1<<endl;
    }
}