//sap xep mot mang duoc nhap tu bang phim theo phuong phap chon truc tiep
#include<stdio.h>

void Nhap(int a[],int n){//ham nhap mang
	for(int i=0;i<n;i++){
		 printf("\nNhap a[%d]=",i);
         scanf("%d",&a[i]);
	}
}

void Xuat(int a[],int n){//ham xuat mang
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}

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
	printf("Mang sau khi sap xep:");
	Xuat(a,n);
} 

int main()
{
	int a[100], n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	Nhap(a,n);
	Selection_sort(a,n);
}

