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
	//1. ����һ�������
	//ʱ���
	int guess = 0;//���ղµ�����
	int ret = rand()%100+1;//����1-100֮�������
	//printf("%d\n", ret);
	//2. ������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");

		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}

// �˷��ھ���

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

// ��ʮ�����������ֵ

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];	//���������е�ĳ��Ԫ��Ϊ���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("������Ϊ��%d", max);
//	return 0;
//}

// ������� ����1/1-1/2+1/3-1/4......+1/99 - 1/100 ��ֵ

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag* 1.0 / i;
//		flag = -flag; //�任����
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


// ��д������һ��1-100�����������г��ֶ��ٸ�����9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) //��λ��9
//			count++;
//		if (i / 10 == 9) //ʮλ��9
//			count++;
//	}
//	
//	printf("count = %d", count);
//	return 0;
//
//}