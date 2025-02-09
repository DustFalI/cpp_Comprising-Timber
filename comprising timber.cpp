#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,accounts[5005] = {0},a,b,c,temp,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>temp;
		accounts[temp]++;
	}
	for(int a=1;a<=2500;a++)
	{
		for(int b=a;b<=5000-a;b++)
		{
			long long k3 = accounts[a + b],k2 = accounts[b],k1 = accounts[a];
			if(k3 >= 2)
			{
				if(a == b)
				{
					temp = (k1 * (k1 - 1) / 2) * (k3 * (k3 - 1) / 2);
					ans += temp;
				}
				if(a != b)
				{
					temp = k1 * k2 * (k3 * (k3 - 1) / 2);
					ans += temp;
				}
			}
		}
	}
	ans = ans % 1000000007;
	cout<<ans;
	return 0;
}
