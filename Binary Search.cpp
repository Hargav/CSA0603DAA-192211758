#include<stdio.h>
int main(){
	int arr[]={-2,-4,0,2,4,6,8,10,18,22};
	int n=sizeof(arr)/sizeof(arr[0]);
	int start=0,end=n-1,k=18;
	while(start<end){
		int mid=(start+end)/2;
		if(arr[mid]==k){
			printf("%d found at index %d.",k,mid);
			return 0;
		}else if(arr[mid]<k){
			start=mid+1;
		}else if(arr[mid]>k){
			end=mid-1;
		}
	}
	printf("Element not found");
	return 0;
}
