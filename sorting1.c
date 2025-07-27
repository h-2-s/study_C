#include <stdio.h>

int main() {
  int arr[5] = { 5,3,2,1,4 };
  printf("sort 이전:");
  for (int i = 0; i < 5; i++) {
    printf("%d", arr[i]);
  }
  //i 감소
  for (int i = 4; i >=0; i--) {
    for (int j = 0; j < i; j++) {
      if (arr[i] > arr[j]) {
        continue;
      }
      else if (arr[j] > arr[i]) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
  printf("\n");
  printf("sort 이후:");
  for (int i = 0; i < 5; i++) {
    printf("%d", arr[i]);
  }
}
