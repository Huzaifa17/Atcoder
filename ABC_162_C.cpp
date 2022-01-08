#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}

int main()
{
	int i,j,k,n,m,sum=0;
	cin>>k;
	for(i=1;i<=k;++i)
	{
		for(j=1;j<=k;++j)
		{
			//cout<<i<<" "<<j<<" "<<k<<endl;
			n=gcd(i,j);
			for(m=1;m<=k;++m)
			{
				//cout<<i<<" "<<j<<" "<<m<<endl;
				sum+=(gcd(n,m));
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
