#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      int n,m;
      cin>>n>>m;
      ll time=0;
      int curr=1;
      while(m--)
      {
          int task;
          cin>>task;
          if(task==curr)
          {
              continue;
          }
          else if(task>curr){
              time+=task-curr;
          }
          else if(curr>task)
          {
              time+=n-(curr-task);
          }
          curr=task;
          
      }
      cout<<time<<endl;
    }