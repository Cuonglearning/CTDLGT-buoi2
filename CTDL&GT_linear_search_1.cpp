// Tim kiem 12 trong mang :{3, 5, 6, 8, 12, 34, 56, 78, 99}  / nguon:https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; 
 
    if (arr[mid] == x)
      return mid;
 
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
 
    return binarySearch(arr, mid + 1, r, x);
  }
 
  return -1;
}
 
int main(void) {
  int arr[] = {3, 5, 6, 8, 12, 34, 56, 78, 99};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 12;
  int result = binarySearch(arr, 0, n - 1, x);
  if (result == -1)
    printf("%d khong co trong mang",x);
  else
    printf("%d xuat hien tai chi so %d", x, result);
  return 0;
}


