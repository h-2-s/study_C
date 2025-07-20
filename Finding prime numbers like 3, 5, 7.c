#include <stdio.h>

int main(){
  int n;
  printf("n을 입력하시오:");
  scanf_s("%d",&n);

  for (int i=2;i<n;i++){
    if (n%i==0){
      printf("%d는 소수가 아님\n",n);
      break;
    }
    else {
      printf("%d는 소수\n",n);
      break;
    }
  }
