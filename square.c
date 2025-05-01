//Aashish karki BCSIT-1st sem
#include <stdio.h>
int main() {
int rows = 5;
int column = 5;
for (int i = 1; i <= rows; i++) {
for (int j = 1; j <= column; j++) {
if (i == 1 || i == rows || j == 1 || j == column) {
printf("*");
} else {
printf(" ");
}
}
printf("\n");
}
return 0;
}