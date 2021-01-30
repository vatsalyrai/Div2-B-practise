#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q,d;
        cin>>q>>d;
        while(q--)
        {
            int num;
            cin>>num;
            bool flag =0;
            if(num>=d*10)
            {
                flag=1;
            }
            if(flag==0)
            {
                while(num>0)
                {
                    if(num%d==0)
                    {
                        flag=true;
                    }
                    num-=10;
                }
            }
            flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
        
    }
}