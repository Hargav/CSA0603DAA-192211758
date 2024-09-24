#include<stdio.h>
int main(){
	int  num,reverse=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num!=0){
		int remainder=num%10;
		reverse=reverse*10+remainder;
		num/=10;
	}
	printf("reversed number:%d\n",reverse);
	return 0;
}
