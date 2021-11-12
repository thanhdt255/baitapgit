#include <stdio.h>
float average(int s[],int n){
	float sum =0.0,average;
	for(int i=0;i<n;i++){
		sum+=s[i];
		
	}
	average=sum/n;
	return average;
}
int main(){
	int n;
	printf("chieu dai mang so nguyen:");
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		printf("phan tu thu %d:",i);
		
		scanf("%d",&s[i]);
	}
	printf("Trung binh cac so phan tu cua mang: %.2f",average(s,n));
	
}
