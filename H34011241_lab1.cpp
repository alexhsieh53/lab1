#include<iostream>
#include<iomanip>

using namespace std;
 
int main()
{

int a;
      cin>>a;
      
      while(a!=1) 
      {
                  cout<<" "<<a<<" ";
                  if((a%2)!=0)
                  {
                     a=3*a+1;      
                              }
                              
          else
          {
              a=a/2; 
              } 
                }
                cout<<" "<<1<<endl;
            }
