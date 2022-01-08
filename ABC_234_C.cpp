#include<iostream>
using namespace std;

int arr[100001];
int count=0;

void base(long long n)
{
	//int i=0,j,k,m;
	while(n)
	{
		arr[count]=n%2;
		count++;
		n/=2;
	}
	return ;
}

int main()
{
	long long n;
	cin>>n;
	base(n);
	count--;
	while(count>=0)
	{
		cout<<arr[count]*2;
		count--;
	}
	cout<<endl;
	return 0;
}
