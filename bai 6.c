#include<stdio.h>

int main(){
	int arr[5] = {24, 3, 20, 6, 14};
	int i;
	
	printf("Mang ban dau: ");
	for(i = 0; i < 5;i++){
		printf("%d ", arr[i]);
	}
	for(i = 0; i < 5; i++){
		if(arr[i] % 2 ==0){
			arr[i] += 3;
		}
		else{
			arr[i] +=2;
		}
	}
	printf("\nMang khi thay doi la: ");
	for(i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	
	
	
	
	return 0;
}
