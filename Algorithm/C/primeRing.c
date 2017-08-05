#include<stdio.h>
#include<math.h>

int a[20],b[20];

int search(int);
int isPrime(int);
int main()
{
	int i;
	a[0] = 1;
	b[0] = 1;
	if(search(1))
	{
		for(i = 0;i < 20;i++)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;

}

int search(int m)
{
	int i;
	if(m == 20)
	{
		return isPrime(a[m-1] + a[0]);
	}
	else
	{
		for(i = 1;i < 20;i++)
			if(b[i] == 0 && isPrime((m + 1) + a[m-1]))
			{
				b[i] = 1;
				a[m] = i + 1;
				if(search(m + 1))
					return 1;
				else
					b[i] = 0;
			}
	}
	return 0;
}

int isPrime(int m)
{
	int i,t,f = 1;
	t = sqrt(m);
	for(i = 2;i <= t;i++)
	if(m%i == 0)
	{
		f = 0;
		break;
	}
	return f;
}
