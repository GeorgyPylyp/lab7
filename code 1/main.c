#include <stdio.h>
#include <math.h>
float res();
float rset();

int main() {
rset();
}

float res() {
float r;
r = (sqrt(2) + 2 + (2 * 2)) / (sqrt(3) + 3 + (3 * 3))+(sqrt(5) + 5 + (5 * 5)) / (sqrt(7) + 7 + (7 * 7))+(sqrt(6) + 6 + (6 * 6)) / (sqrt(9) + 9 + (9 * 9))+(sqrt(4) + 4 + (4 * 4)) / (sqrt(8) + 8 + (8 * 8));
return r;
}

float rset(){
printf("Результат: %f\n", res());
return 0;
}