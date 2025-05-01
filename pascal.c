//Aashish karki BCSIT-1st sem
#include <stdio.h>
int factorial(int n) {
int fact = 1;
for (int i = 1; i <= n; i++) {
fact *= i;
}
return fact;
}
int binomialCoefficient(int n, int r) {
return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
int rows = 4;
for (int i = 0; i < rows; i++) {
for (int j = 1; j < rows - i; j++) {
printf(" ");
}
for (int j = 0; j <= i; j++) {
printf("%d ", binomialCoefficient(i, j));
}
printf("\n");
}
return 0;
}