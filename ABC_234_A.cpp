#include<bits/stdc++.h>
using namespace std;

long long f(long long t)
{
	t=(t*t)+(2*t)+3;
	return t;
}

int main()
{
	long long int i,j,k,n,m,t;
	cin>>t;
	n=f(f(f(t)+t)+f(f(t)));
	cout<<n<<endl;
	return 0;
}
