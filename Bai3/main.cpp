#include <bits/stdc++.h>
using namespace std;
const int N=10e3+5;
bool isprime[N];
void seive()
{
    int cnt=0;
    int k;
    cin>>k;
    vector<int> vecprime;
    for(int i=2; i<=N; i++)
    {
        isprime[i]=true;
    }
    for(int i=2; i*i<=N; i++)
    {
        if(isprime[i]=true)
        {
            for(int j=i*i; j<=N; j+=i)
                isprime[j]=false;
        }
    }
    for(int i=2; i<=N; i++)
    {
        if(isprime[i]==true)
            vecprime.push_back(i);
    }
    for(int j=0; j<vecprime.size(); j++)
    {
        for(int i=0; i<vecprime.size(); i++)
        {
            if(vecprime[j]=vecprime[i]+vecprime[i+1]+1)
                cnt++;
        }
    }
    if (cnt>=k)
        cout<<"YES";
    else
        cout<<"NO";
}


int main()
{
    seive();
    return 0;
}
