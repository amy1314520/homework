#include<iostream.h>
#define M 10
void main()
{
	int a[M],*p=a,*q=a;
	int max,min,x,y,t;
	cout<<"输入10个数:";
	for(int i=0;i<M;i++)
		cin>>a[i];
	max=a[0];
	min=a[0];
	for(i=0;i<M;i++)
	{
		if(a[i]>=max)
		{
			max=a[i];
				x=i;
		}
	
		if(a[i]<=min)
		{
			min=a[i];
			y=i;
		}
	}
	p=p+x;
	q=q+y;
	t=*p;
	*p=*q;
	*q=t;
	cout<<"输出：";
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}