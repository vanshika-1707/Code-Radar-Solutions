#include <stdio.h>

int main() {
  int num1, num2;
  char operator;

  // Input
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator);

  // Calculation
  if (operator == '+') {
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
  } else if (operator == '-') {
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
  } else if (operator == '*') {
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
  } else if (operator == '/') {
    if (num2 == 0) {
      printf("Error: Division by zero\n");
    } else {
      printf("%d / %d = %d\n", num1, num2, num1 / num2);
    }
  } else {
    printf("Error: Invalid operator\n");
  }

  return 0;
}