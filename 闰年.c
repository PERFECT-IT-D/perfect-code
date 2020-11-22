//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a % 100 == 0 && a % 4 == 0)
//		{
//			printf("%d ", a);
//		}
//		if (a % 400 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>/*nt main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			if (a%b != 0)
//				printf("%d ", a);
//		}
//	
//			
//	}
//	return 0;
//}*/
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	double b = 1.0;
//	double sum = 0.0;
//	for (a = 1; a <= 100; a++)
//	{
//		sum = b * 1 / a;
//		sum += sum;
//		b *= -1 * b;
//
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
	//int arr[10] = { 0 };
//	in//t i = 0;
//	int max = 0;
//
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//
//	max = arr[0];
//	for (i = 1; i<10; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++)
	{
		scanf("%d", &arr[a]);
	}
	int max = arr[0];
	int i = 0;
	for (i = 1; 1 < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		printf("max = %d", max);
		return 0;
	}