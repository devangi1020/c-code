#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, s, A ;
	cout<<"enter the value of a, b, c";
	cin>>a>>b>>c;
	s= ((a+b+c)/2);
	A= sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"the result is "<<A;
	return 0;
}
