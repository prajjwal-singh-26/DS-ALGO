#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
        vector<int>arr(7)={5,5,4,8,7,1,6};
        int k=1;
        vector<int>count(0);
        int n=arr.size();
        int mini=INT_MAX;
        int valuedel=0;
        cout<<"ok"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
            count[arr[i]]++;
        mini=min(mini,count[i]);
        cout<<count[i];
        }

        
        valuedel=mini;
        auto it=find(arr.begin(),arr.end(),valuedel);
        if(it!=arr.end())
        arr.erase(it);
        
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
        }
        return 0;
    }