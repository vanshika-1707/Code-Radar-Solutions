#include <stdio.h>

int main() {
  int num1, num2;
  char operator;

  printf("Enter two numbers and an operator (+, -, *, /): ");
  scanf("%d %d %c", &num1, &num2, &operator);

  switch (operator) {
    case '+':
      printf("%d + %d = %d\n", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%d - %d = %d\n", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%d * %d = %d\n", num1, num2, num1 * num2);
      break;
    case '/':
      if (num2 == 0) {
        printf("Error: Division by zero!\n");
      } else {
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
      }
      break;
    default:
      printf("Error: Invalid operator!\n");
  }

  return 0;
}