#include<bits/stdc++.h>
using namespace std;

long long f(long long t)
{
	t=(t*t)+(2*t)+3;
	return t;
}

int main()
{
	double max=-110000;
	int i,j,k,n,m;
	cin>>n;
	double x[n],y[n],res1,res2,res;
	for(i=0;i<n;++i)
	{
		cin>>x[i]>>y[i];
	}
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			res1=x[i]-x[j];
			res2=y[i]-y[j];
			res1=res1*res1;
			res2=res2*res2;
			res=sqrt(res1+res2);
			if(res>max)
			{
				max=res;
			}
		}
	}
	cout<<fixed<<setprecision(14)<<max<<endl;
	//cout<<max<<endl;
	return 0;
}
