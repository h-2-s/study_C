#include <stdio.h>

//단수 n, 곱하기 m

int main() {
  int n;
  printf("몇 단? ");
  scanf_s("%d", &n);
  
  for (int i = 1; i < 10; i++) {
    printf("%d * %d = %d\n", n, i, n * i);
  }

}
