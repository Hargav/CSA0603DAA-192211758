#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char rev[100];
	printf("Enter a String: ");
	scanf("%s",str);
	int len=strlen(str);
	rev[len]='\0';
	for(int i=len-1;i>=0;i--){
		rev[len-i-1]=str[i];
	}
	if(strcmp(str,rev)==0){
		printf("%s is a Palindrome String",str);
	}else{
		printf("%s is not a Palindrome string",str);
	}
	return 0;
}
