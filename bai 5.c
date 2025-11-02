#include<stdio.h>

int main(){
	int arr[5] = {10, 50, 24, 03, 14};
	int max = arr[0];
	int min = arr[0];
	int i;
	for (i = 0;i < 5;i++){
		if(arr[i] > max)
		max = arr[i];
		if(arr[i] < min)
		min = arr[i];
	} 
	printf("Phan tu lon nhat la : %d\n", max);
	printf("Phan tu nho nhat la: %d\n", min);3
	
	return 0;
}
