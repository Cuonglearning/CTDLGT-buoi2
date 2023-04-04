//sap xep mot mang duoc nhap tu bang phim thro phuong phap doi cho truc tiep
#include <stdio.h>

void nhap(int a[],int n){
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

int Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<=n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int tg = a[i];
                a[i] = a[j];
                a[j] = tg;	
			}
		}
	}
	printf("\nMang sau khi sap xep:\t");
	Xuat(a,n);
}

int main()
{
	int a[100],n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	nhap(a,n);
	printf("Mang ban dau:\t\t");
	Xuat(a,n);
	Interchange_Sort(a, n);
}


