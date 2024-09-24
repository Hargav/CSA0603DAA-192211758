#include<stdio.h>
int main(){
	int arr[]={90,10,80,20,70,30,60,40,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k=80,flag=0,i;
	for(i=0;i<n;i++){
		if(arr[i]==k){
			flag=1;
		}
	}
		if(flag==1){
			printf("%d found in the array",k);
		}else{
			printf("element not found");
		}
	return 0;
}
