

//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ

//�����������λ����_______��

//��̣���������5�����֣����������Ϊ����5λ������������������5λ�����������ERROR

#include<stdio.h>
int main(){
	int a[5],temp,max1=0,max2=0,max3=0,max4=0,max5=0,i,z,x,c,v,q,w,e,r;
	scanf("%d%d%d%d%d",&a[0] ,&a[1], &a[2], &a[3] ,&a[4]);
	for(i=4;i>=0;i--)
	{
		if(a[i]>=max1)
		{
		max1=a[i];
		q=i;}
		else
		{continue;
		}
	}
	for(z=4;z>=0;z--)
	{
		if(z==q)
		{
		continue;}
		else
		{
		if(a[z]>=max2)
		{
		max2=a[z];
		w=z;}
		else
		{continue;
		}}
	}
	for(x=4;x>=0;x--)
	{
		if(x==w||x==q)
		{
		continue;}
		else 
		{
		if(a[x]>=max3)
		{
		max3=a[x];
		e=x;}
		else
		{continue;
		}}
	}
	for(c=4;c>=0;c--)
	{
		if(c==e||c==w||c==q)
		{
		continue;}
		else
		{
		if(a[c]>=max4)
		{
		max4=a[c];
		r=c;}
		else
		{continue;
		}}
	}
	for(v=4;v>=0;v--)
	{
		if(v==r||v==e||v==w||v==q)
		{
		continue;}
		else
		{
		if(a[v]>=max5)
		max5=a[v];
		else
		{continue;
		}}
	}
	
	int num=max1*10000+max2*1000+max3*100+max4*10+max5*1;
	int y=0;
	for(int h=2;h<num;h++){
        if(num%h==0){
            y++;  // ����������1
        }
    }

    if(y==0){
       printf("%d",num) ;
    }else{
        printf("error\n");
    }
	return 0;
	
	
}
