#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("***********************\n");
	printf("****1.PLAY 0.EXIT ****\n");
	printf("***********************\n");

}

void game()
{
	//1. 生成一个随机数
	//时间戳
	int guess = 0;//接收猜的数字
	int ret = rand()%100+1;//生成1-100之间随机数
	//printf("%d\n", ret);
	//2. 猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");

		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);
	return 0;
}

// 乘法口诀表

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 求十个整数的最大值

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];	//假设数组中的某个元素为最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("最大的数为：%d", max);
//	return 0;
//}

// 分数求和 计算1/1-1/2+1/3-1/4......+1/99 - 1/100 的值

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag* 1.0 / i;
//		flag = -flag; //变换符号
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


// 编写程序数一下1-100的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) //个位有9
//			count++;
//		if (i / 10 == 9) //十位有9
//			count++;
//	}
//	
//	printf("count = %d", count);
//	return 0;
//
//}