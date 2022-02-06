#include<stdio.h>
int bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//确定冒牌排序的次数
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//确定每一次交换的次数
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,5,6,7,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)//排列好之后在依次打印
	{
		printf("%d ", arr[i]);
	}
	return 0;
}