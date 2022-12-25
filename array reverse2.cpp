#include<iostream>
using namespace std;
int main()
{
	
	char Name[11]={'a','b','c','d','e','f','g','h','i','j'};
	cout<<Name;
	char revName[11];
	int x=10;
	for(int i=0; i<=10; i++)
	{
		revName[i]=Name[x];
		x--;
	}
	cout<<"\n After reversing the number"<<endl;
	{
		for(int i=0;i<=10; i++)
		
cout<<revName[i];
		
	}
	
}
