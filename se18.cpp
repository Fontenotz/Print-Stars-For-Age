#include<iostream.h>
	
int a,b;

int main()
{

	cout<<"Enter age";
	cin>>a;
	a=b;

	for (int y=0;y<a;y++)
	{
		for (int x=0;x<5;x++)
			{
				cout<<"*";
			}
		cout<<endl;
		a--;
	}

	return 0;
}
