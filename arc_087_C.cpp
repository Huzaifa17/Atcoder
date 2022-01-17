#include<iostream>
#include<map>
using namespace std;

int main()
{
	int i,j,k,n,m,t;
	map<int,int> mp;
	map<int,int> ::iterator it;
	cin>>n;
	for(i=0;i<n;++i)
	{
		cin>>k;
		mp[k]++;
	}
	long long int sum=0;
	for(it=mp.begin();it!=mp.end();++it)
	{
		if(it->second>=it->first)
		{
			sum+=(it->second-it->first);
		}
		else
		{
			sum+=(it->second);
		}
	}
	cout<<sum<<endl;
	return 0;
}
