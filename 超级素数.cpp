//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。 
#include<stdio.h>
int is(int i){
 	int ret=1;
	int j ;
	for(j=2; j<i; j++){
	if(i%j == 0){
	ret = 0;
	break;
	}
	}
	return ret;
}

int main(){
	int y,e,f,o,p,q;
	int h,g,ave;
	int t=0;
	int w=0;
	h=0;
    for(y=101;y<1000;y++){
    	o=y/100;
        p=(y-o*100)/10;
        q=y%10;
        e=o+p+q;
        f=o*o+p*p+q*q;
	if( is(y) && is(e) && is(f) ){
		printf("%d ",y);
		h=h+y;
		t=t+1;
	    }
	}
	
	int x,m,n,a,b,c,d;
   
    g=0;
    for(x=1000;x<10000;x++){
    	a= x/1000;
        b=(x-a*1000)/100;
        c=(x-a*1000-b*100)/10;
        d=x%10;
        m=a+b+c+d;
        n=a*a+b*b+c*c+d*d;
	if( is(x) && is(m) && is(n) ){
		printf("%d ",x);
		g=g+x;
		w=w+1;
	    }
	}
	
	ave=(g+h)/(w+t);
	printf("average=%d",ave);

	
	return 0;
}
