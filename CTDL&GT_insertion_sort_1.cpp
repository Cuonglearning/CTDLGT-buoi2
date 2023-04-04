//sap xep chen truc tiep
#include<stdio.h>
void Insertion_sort(int a[], int n) {
	int index, new_number;
	for (int i = 1; i < n; i++){
		index = i;
		new_number = a[i];
		while (index > 0 && a[index - 1] > new_number){
			a[index] = a[index - 1];
			index--;
		}
		a[index] = new_number;
	}
}

int main()
{
	int a[5] = {6,8,4,5,3};
	Insertion_sort(a, 5);
	printf("Mang sau khi sap xep:");
	for(int i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
}

