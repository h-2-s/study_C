#include <stdio.h>

int main() {
  int m, d;
  printf("월:");
  scanf_s("%d", &m);
  printf("일:");
  scanf_s("%d", &d);
  int sum = 0;
  for (int i = 1; i < m; i++) {
  
    if (i == 1||i== 3||i== 5||i== 7||i== 8||i== 10||i== 12) {
      sum += 31;
    }
    else if (i == 4||i== 6||i== 9||i== 11) {
      sum += 30;
    }
    else if (i == 2) {
      sum += 28;
    }
  
  }
  printf("총 일수의 합: %d일\n", sum + d);
}
