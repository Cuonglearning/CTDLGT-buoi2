//cai dat doi cho truc tiep /nguon:https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort
#include <stdio.h>
void Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int tam=a[i];
				a[j]=a[i];
				a[j]=tam;
			}
		}
	}
}

int main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Interchange_Sort(a, 5);
	printf("Mang sau khi sap xep:");
	for(int i=0;i<5;i++){
		printf("%d\t"a[i]);
	}
}


