#include <iostream.h>
#define M 4
#define N 4
void main()
{
	int i,j,a[M][N],sum=0;
	cout<<"Please input 16 numbers:";
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>a[i][j];
			if(i==j)
		    sum=sum+a[i][j];
		}
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"sum="<<sum<<endl<<endl;
	for(j=1;j<N;j++)
	{
		for(i=0;i<j;i++)
			a[i][j]=a[i][j]+1;
	}
	for(i=1;i<M;i++)
	{
		for(j=0;j<i;j++)
			a[i][j]=a[i][j]-1;
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
