#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

const int Low = -100, High = 200;
int n;
int a[100];

void mas();
void masp();
void sum();
void minmax();

int main() {
  srand(time(0));
  printf("Введіть n: ");
  scanf("%d", &n);
  mas();
  masp();
  sum();
  minmax();
}

// створення масиву 
void mas() {
  for (int i = 0; i < n; i++) {
    a[i] = rand() % (High - Low + 1) + Low;
  }
}

// виведення масиву 
void masp() {
  printf("Масив:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

// обчислення суми від'ємних елементів масиву
void sum() {
  int s = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] < 0)
      s += a[i];
  }
 if( s>=0){ 
  printf("немає від'ємних елементів\n");}
  else {printf("Сума від'ємних елементів: %d\n", s);}
}

void minmax() {
  int min = 0;
  int max = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > a[min])
      min = i;
    if (a[i] < a[max])
      max = i;
  }
  int p0;
  int p = 1; // Ініціалізуємо зміну p
  int st, en;
  if (min < max) {
    st = min;
    en = max;
  } else {
    st = max;
    en = min;
  }
for (int i = st + 1; i < en; i++) {
p *= a[i];
  }
  printf("Добуток елементів між максимальним і мінімальним: %d\n", p);
}
