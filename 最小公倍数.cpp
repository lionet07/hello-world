#include<stdio.h>
int main(void)
{
	int m,n,temp,i;

	
	printf("m=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	
	{
	if (m>=n)
here:	
	    if (m%n ==0){
	       printf("最小公倍数：%d",m);
	       goto out;
		   }
		   
		for(i=m;i>0;i++) 
		    if(i%n ==0 && i%m ==0) 
			{
			     printf("最小公倍数：%d",i);
		         goto out;
				 }
		   	    
	
		   
    if (m<n)
       temp=m;
       m=n;
       n=temp;
       goto here;
	   }
out:	 
	return 0;	
}
