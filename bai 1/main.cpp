#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	while (n--)
	{
		long long x;
		cin>>x;
		long long y;
		cin>>y;
		if( x-y>1 )
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
