#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
   int arr[5]={10,20,30,40,50};
   bool result=true;
  for (int i=0; i<4; i++)
  {
    if(arr[i]>arr[i+1])
    {
        result=false;
        break;
    }
  }
  
   
 cout << result;
 return 0;
}