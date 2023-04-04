//sap xep mang duoc nhap tu ban phim bang thuat toan sap xep nhanh
#include<stdio.h>
 
 
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
 
 
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void inputArray(int arr[],int n){
	for(int i=0;i<n;i++){
		 printf("\nNhap a[%d]=",i);
         scanf("%d",&arr[i]);
	}
}
 
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++){
        printf("%d \t",arr[i]);
    }
}
 
 
int main()
{
    int arr[100],n,low,high;
    printf("Nhap so phan tu mang:");
    scanf("%d",&n);
    inputArray(arr,n);
    quickSort(arr, low, high);
    printf("Mang sau khi sap xep: \n");
    printArray(arr, n);
    return 0;
}

