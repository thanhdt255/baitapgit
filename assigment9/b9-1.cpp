#include <stdio.h>
#include <iostream>
int main(){
	int n;
	printf("nhap vao n=");
	scanf("%d",&n);
	int temp=n;
	int tong=0;
	while(temp!=0){
	
		tong+=temp%10;
		temp=temp/10;
	}
	return tong;
	printf("tong cac chu so la %d",tong);
}
