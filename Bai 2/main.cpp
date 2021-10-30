#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    long long a;
    cin>>a;
    long long b;
    cin>>b;
    cout<<"YES"<<endl;
    for(long long i=a; i<b; i+=2)
        cout<<i<<" "<<i+1<<endl;
    return 0;
}
