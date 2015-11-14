#include<stdio.h>
int main(){
int x,num,p=0,n=0,z=0;
	printf("how many numbers do you want to enter\n");
	scanf("%d",&x);
		while(x>0){
	scanf("%d",&num);
		if(num>0)
		p++;
		if(num<0)
		n++;
		if(num=0)
		z++;
		x--;}
	printf("\nyou entered\n %d positive numbers\n %d negative nubers\n %d zeros number\n",p,n,z);
	}
