#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // int sum=0;
    int mx=0;
    int i=0, j=0;
    while(j<n)
    {
        if(t>=arr[j])
        {
            t-=arr[j];
            j++;
        }
        else{
            mx=max(mx,j-i);
            t+=arr[i];
            i++;
        }
        if(i==j && arr[i]>t)
        {
            i++;
            j++;
        }
    }
    mx=max(mx,j-i);
    cout<<mx<<endl;
    // return 0;
}