#include<iostream>
using namespace std;
int main()
{
	for(int i=1; i<=5 ;i++)//outer loop
	{
		for(int j=1; j<=5 ; j++)//inner loop
		{
			cout<<i<<" "<<j;
		}
		cout<<endl;
	}
}
