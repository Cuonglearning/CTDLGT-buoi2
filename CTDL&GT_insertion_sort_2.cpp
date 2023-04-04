//sap xep mang nhap tu ban phim theo thuat toan sap xep chon truc tiep
#include<stdio.h>

void Nhap(int a[],int n){
	for(int i=0;i<n;i++){
		 printf("\nNhap a[%d]=",i);
         scanf("%d",&a[i]);
	}
}

void Xuat(int a[],int n){
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}

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
	Xuat(a,n);
}

int main()
{
	int a[100],n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	Nhap(a,n);
	printf("Mang sau khi sap xep:");
	Insertion_sort(a,n);
}

