#include<stdio.h>
int main(){
	int n,a,s,i,j;
	printf("enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=1;
		for(s=1;s<=n-i-1;s++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf(" %d ",a);
			a=a*(i-j)/j;
		}
		printf("\n");
	}
	return 0;
}
