#include <stdio.h>
int main(void)
{   
   int a, b, c, d, e;
   
   printf("�ܹ��ж�����:");     scanf("%d", &a); 
   printf("Ӣ��:");             scanf("%d", &b);  
   printf("����:");             scanf("%d", &c);  
   printf("ɶҲ����ķ���:");   scanf("%d", &d);  
   
   e = b + c + d - a;
   
   if (a < b || a < c || a < d || b < e || c < e || e < 0)
      printf("�������ݴ����޷�����");
   else 
      printf("�����������%d��", e);
	  
	return 0;    
}
     
