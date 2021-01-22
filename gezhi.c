#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
 
int length(int num)//输出数值的位数
{
	int i = 0;
	while (num)
	{
		num /= 10;
		i++;
	}
	return i;
}
 
void Multiplication(int a, int b, int an, int bn)  //格子乘法
{
	int n = 0; 
	int i = an - 1;
	int arr[10][5] = { 0 }; //用来存放每一位相乘的结果
	int num[20] = { 0 };//用来保存对角线的和
 
	while (a)		//建立格子矩阵
	{
		int c = a % 10 * b;
		int lc = length(c);
		int J_to_lc;

		for (J_to_lc= lc - 1; J_to_lc >= 0; J_to_lc--)
		{
			arr[i][J_to_lc] = c % 10;
			c /= 10;
		}
		i--;
		a /= 10;
	}
 
	printf("格子矩阵为：\n");
	int I_to_An,J_to_An;
	for (I_to_An = 0; I_to_An < an; I_to_An++)		//输出格子矩阵
	{
		for (J_to_An = 0; J_to_An <= bn; J_to_An++)
		{
			printf("%d ", arr[I_to_An][J_to_An]);
		}
		printf("\n");
	}
	printf("\n");

    int I_to_Bn,J_to_Bn;
	for (I_to_Bn = an - 1, J_to_Bn = bn - 1; I_to_Bn >= 0; I_to_Bn--) //最右边一列为起点求对角线元素和
	{
		while (I_to_Bn < an)
		{
			num[n] += arr[I_to_Bn][J_to_Bn];
			I_to_Bn++; n++;
		}
	}
	int I_AN,J_AN;
	for (I_AN = 0, J_AN = bn - 1; J_AN >= 0; J_AN--)//最上边一行为起点求对角线元素和
	{
		while (I_AN < an)
		{
			num[n] += arr[I_AN][J_AN];
			I_AN++; n++;
		}
	}
    int I_Num,J_Num;
	for (I_Num = 0, J_Num = n; I_Num>J_Num; I_Num++, J_Num--)//倒序数组
	{
		int Tmp = num[I_Num];
		num[I_Num] = num[J_Num];
		num[J_Num] = Tmp;
	}
 
	printf("计算结果是：\n");
	int I_Result;
	for (I_Result = 0; I_Result < n; I_Result++)
	{
		printf("%d", num[I_Result]);
	}
	printf("\n");
}

int main()
{
	//int a = 58778853425466; int b = 247375829759213;
	int a = 0, b = 0, an = 0, bn = 0;
	printf("输入较长的一个乘数及它的长度,用空格分开：\n");
	scanf("%d %d", &a, &an);
	printf("输入另一个乘数：\n");
	scanf("%d %d", &b, &bn);
	Multiplication(a, b, an, bn);
 
	system("pause");
	return 0;
}