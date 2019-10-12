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
   printf("两个数互质");
    }
    else { 
   printf("两个数不是互质"); 
    }	    
   return 0;
}
