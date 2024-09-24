#include<stdio.h>
int main(){
	int a[6]={1,2,3,4,5};
	int p=3,i,x;
	printf("enter the element to insert:");
	scanf("%d",&x);
	for(i=5;i>=p;i--){
		a[i]=a[i-1];
	}
	a[p-1]=x;
	for(i=0;i<6;i++){
		printf("element %d: %d\n",i+1,a[i]);
	}
	return 0;
}
