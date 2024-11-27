#include<stdio.h>
int main(){
	int i,so1;
	printf("moi ban nhap vao mot so nguyen\n");
	scanf("%d",&so1);
	printf("cac uoc so cua %d la :\n",so1);
	
	for(i=1;i<=so1;i++){
		if(so1%i==0){
			printf("%d\n",i);
		}
		
	}
	return 0;
} 
