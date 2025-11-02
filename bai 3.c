#include<stdio.h>

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int so_chan = 0;
	int i;
	
	for(i = 0; i < 5; i++)
	if (arr[i] % 2 == 0){
		printf("%d\n", arr[i]);
		so_chan = 1;
	}
	if(!so_chan)
	printf("Mang khong chua so chan.");
	
	return 0;
}


