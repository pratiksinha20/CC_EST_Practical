#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
    int o=0;
    int z=0;
    for(int i=0; i<arr.size(); i++)
    {
      if(arr[i]==1)
      {
        o++;
      }
      else{
        z++;
      }
    }

    int ans=0;
    for(int i=0; i<n; i++)
    {
      for(int j=i; j<n; j++)
      {
        if(o>ans)
        
        cout<<ans<<endl;
      }
    }
    return 0;
}