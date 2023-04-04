//sap xep mot mang duoc nhap tu bang phim
#include<stdio.h>
void Selection_sort(int a[], int n){
	int min_index;
	for (int i = 0; i < n - 1; i++){
		min_index = i;
		for (int j = i + 1; j < n; j++){
			if (a[min_index] > a[j]){
				min_index = j;
			}
		}
		if (i != min_index){
			int temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
	}
} 

int main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Selection_sort(a, 5);
	printf("Mang sau khi sap xep:");
	for(int i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
}

