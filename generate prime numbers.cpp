#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter range: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		int flag=1;
		for(j=2;j*j<=i;j++){
		if(i%j==0){
			flag=0;
			break;
		}
	}
		if(flag==1) printf("%d ",i);
	}
	return 0;
}
