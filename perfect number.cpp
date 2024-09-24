#include<stdio.h>
int main(){
	int n,i,j,sum=0,num;
	printf("enter the number:");
	scanf("%d",&n);
	num=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		printf("perfect number:");
	}else{
		printf("not a perfect number:");
	}
	return 0;
}
