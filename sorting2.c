#include <stdio.h>

int main() {
  int arr[5] = { 5,3,2,1,4 };
  printf("sort 이전:");
  for (int i = 0; i < 5; i++) {
    printf("%d", arr[i]);
  }
  //i 증가
  for (int i = 0; i < 5; i++) {
    for (int j = 4; j > i;j--) {
      if (arr[i] > arr[j]) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j]=tmp;
      }
      else if (arr[j] > arr[i]) {
        continue;
      }
    }
  }
  printf("\n");
  printf("sort 이후:");
  for (int i = 0; i < 5; i++) {
    printf("%d", arr[i]);
  }
}
