#include <bits/stdc++.h>
using namespace std;
void catmouse(int arr[],int n)
{
     int win1=0;
     int win2=0;
     int win3=0;
    for(int i=0;i<n;i++)
    {
        int x=0;
        int y=n-2;
        int m=n-1;
        win1=m-x;
        win2=y-x;
    }
    if(win1<win2)
    cout<<"Cat A"<<endl;
    else if(win1>win2)
    cout<<"Cat B"<<endl;
    else if(win1=win2)
    cout<<"Mouse C"<<endl;
}

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    catmouse(arr,n);
    
    int p;
    cin>>n;
    int brr[n];
    for(int i=0;i<p;i++)
    {
      cin>>brr[i];
    }
    catmouse(brr,p);
     
    return 0;
}