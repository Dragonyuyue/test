#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;
//	int right = sz - 1;
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		printf("找到了，下标是:%d\n", mid);
	//		break;
	//	}
	//}
	//	if (left > right)
	//	{
	//		printf("没找到\n");
	//	}
	//	return 0;
//}函数法
int binary_search(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return 1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int ret=binary_search(arr,k,sz);
	if (ret == 1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了:下标是%d\n", ret);
	}

}
