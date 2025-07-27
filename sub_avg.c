#include <stdio.h>

int main() {
  int kor, eng, mat;
  printf("국어 성적입력:");
  scanf_s("%d", &kor);
  printf("영어 성적입력:");
  scanf_s("%d", &eng);
  printf("수학 성적입력:");
  scanf_s("%d", &mat);

  int sum = kor + eng + mat;
  double avg = (double)sum / 3;
  
  printf("평균은? %.2f\n", avg);
  
  // A: 90~100 , B: 80~90, C: 70~80 , D: 60~70
  //높은 학점 , 낮은 학점
  if (avg > 70) {
      printf("높은 학점에 ");
    if (avg > 90) {
      printf("A 입니다.\n");
    }
    else if (avg<=90 && avg > 80) {
      printf("B 입니다.\n");
    }
    else if (avg<=80 && avg>70) {
      printf("C 입니다.\n");
    }
  }
  else {
    printf("낮은 학점에 ");
    if (avg > 60) {
      printf("D 입니다. \n");
    }
    else if (avg <= 60 && avg > 50) {
      printf("E 입니다. \n");
    }
    else {
      printf("F 입니다. \n");
    }
  }
}
