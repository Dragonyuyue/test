#include<stdio.h>
int main()
{
	char arr[] = { 21,32,35,18,40 };
	int i = 0;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("%d", sum / 5);
	return 0;
}
