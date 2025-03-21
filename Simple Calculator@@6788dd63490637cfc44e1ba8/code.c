#include <stdio.h>
int main(){
  int a, b;
  char op;
  if(scanf("%d %d %c", &a, &b, &op) != 3){
    printf("error\n");
    return 1;
  }
  if (op == '+'){
    printf("%d", a + b);
  }
  else if(op == '-'){
    printf("%d", a - b);
  }
  else if (op == '*'){
    printf("%d", a * b);
  }
  else if (op == '/'){
    if (b == 0){
      printf("error\n");
    }
    else{
      printf("%d", a / b);
    }
}
else{
  printf("error\n");
}
return 0;
}