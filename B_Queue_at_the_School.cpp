#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        char s[100000];
        //cin>>s;
        int n,t;
        cin>>n>>t;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        while(t--){
         for(int i=0;i+1<n;i++)
        { if(s[i]=='B'&& s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i++; //to avoid swapping the same boy again for that second
        }
            
        }
        }
        cout<<s<<endl;
}