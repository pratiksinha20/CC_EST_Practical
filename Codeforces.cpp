#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        while(k/2<1)
        {
            if(k^n%n==0)
            {
                cout<<k<<endl;
                break;
            };
        }
    }
    return 0;
}