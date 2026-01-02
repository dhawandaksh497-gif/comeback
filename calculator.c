#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  char op; // ✅ MISSING LINE (VERY IMPORTANT)
  float num1, num2;

  printf("Simple Calculator\n");
  printf("Enter operator (+, -, *, /): ");
  scanf(" %c", &op); // space before %c is correct

  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  switch (op) {
  case '+':
    printf("Result = %.2f", num1 + num2);
    break;

  case '-':
    printf("Result = %.2f", num1 - num2);
    break;

  case '*':
    printf("Result = %.2f", num1 * num2);
    break;

  case '/':
    if (num2 != 0)
      printf("Result = %.2f", num1 / num2);
    else
      printf("Error: Division by zero!");
    break;

  default:
    printf("Invalid operator!");
  }

  return 0;
}