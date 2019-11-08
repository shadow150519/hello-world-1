//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。
#include <stdio.h>
int main()
{
	int i, a, b, temp;
	int v[5] = {0, 0, 0, 0, 0};
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &v[i]);
	}
	for (a = 0; a < 5; a++)
	{
		for (b = a + 1; b < 5; b++ )
		{
			if(v[a] < v[b])
			{
				temp = v[b];
				v[b] = v[a];
				v[a] = temp;
			}
		}
	}
	printf("%d%d%d%d%d", v[0], v[1], v[2], v[3], v[4]);
	return 0;
 } 
