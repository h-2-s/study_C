#include <stdio.h>

int main() {
  //월을 입력받아서 월의 일수를 출력하는 switch문 작성
  //결과는 4월 30일 입니다
  //단, 윤년은 제외하고 2월은 28일 가정
  
  int n;
  printf("월을 입력:");
  scanf_s("%d", &n);
  int days;
  
  switch (n) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    days = 31;
    break;
    case 2:
    days = 28;
    break;
    case 4: case  6: case 9: case 11:
    days = 30;
    break;
    default:
    printf("잘못된 입력입니다.\n");
    }
    printf("%d월는 %d일입니다.\n", n, days);
}
