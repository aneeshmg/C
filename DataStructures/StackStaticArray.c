#include<stdio.h>

#define N     256
#define ONE   1
#define TWO   2
#define THREE 3

void push(int*, int*, int);
int pop(int*, int*);

int main() {
  //Driver program

  int top       = -1;
  int array[N];

  push(array, &top, ONE);
  push(array, &top, TWO);
  push(array, &top, THREE);

  printf("Pushed values: %d, %d, %d\n", ONE, TWO, THREE);

  printf("Popped values: %d, %d, %d\n",pop(array, &top), pop(array, &top), pop(array, &top));

  return 0;

}

void push(int *array, int *top, int value) {

  array[++(*top)] = value;

}

int pop(int *array, int *top) {

  return array[(*top)--];

}
