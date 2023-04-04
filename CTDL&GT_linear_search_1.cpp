//cai dat tim kiem tuyen tinh /nguon:https://dnmtechs.com/thuat-toan-tim-kiem-tuyen-tinh-tim-kiem-tuan-tu/
#include <stdio.h> 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) ; 
    int result = search(arr, n, x); 
    if(result == -1){
		printf("So khong co trong mang");
		}else{
        printf("%d o vi tri thu %d trong mang",x, result); 
        }
    return 0; 
}
