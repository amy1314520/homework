#include<iostream.h>
float fun(int n)
{
	int i,s1=0;
	float s=0.0;
	for(i=1;i<=n;i++)
	{
		s1=s1+1;
		s=s+1.0/s1;
	}
	return s;
}
void main()
{
	int n;
	float s;
	cout<<"please enter n:"<<endl;
	cin>>n;
	s=fun(n);
	cout<<"1+1/(1+2)+1/(1+2+3)+...+1/(1+2+3...+n)="<<s<<endl;
}