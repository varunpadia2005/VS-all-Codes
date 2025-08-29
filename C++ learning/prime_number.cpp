#include<iostream>
using namespace std;
void prime();
int main()
{
	prime();
}
void prime()
{
	int c;
	for(int i=1;i<=100;i++)
	{
        c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
				c++;
		}
		if(c==2)
		{
			cout << i <<" is the prime no. \n";
		}
	}
}