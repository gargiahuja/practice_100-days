#include<iostream>
using namespace first
{
	int a=30;
}
int a=50;
int main()
{
	int a=20;
	cout<<a;
	cout<<::a;
	cout<<first::a;
}
