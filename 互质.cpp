#include<stdio.h>
int main(void)

 {
 int m,n,temp;
    printf("m= ");
    scanf("%d",&m);
    printf("n= ");
    scanf("%d",&n);
    
 while (m%n !=0) {
    temp = m % n;
    m=n;
    n=temp;
   }
	if (n==1) { 
   printf("����������");
    }
    else { 
   printf("���������ǻ���"); 
    }	    
   return 0;
}
