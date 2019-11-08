#include <stdio.h>
int main(void)
{   
   int a, b, c, d, e;
   
   printf("总共有多少人:");     scanf("%d", &a); 
   printf("英语:");             scanf("%d", &b);  
   printf("俄语:");             scanf("%d", &c);  
   printf("啥也不会的废物:");   scanf("%d", &d);  
   
   e = b + c + d - a;
   
   if (a < b || a < c || a < d || b < e || c < e || e < 0)
      printf("输入数据错误，无法计算");
   else 
      printf("两样都会的有%d人", e);
	  
	return 0;    
}
     
