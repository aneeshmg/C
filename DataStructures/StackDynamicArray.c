#include<stdio.h>
#include<stdlib.h>

#define ONE 1
#define TWO 2
#define THREE 3

void push(int*, int*, int);
int pop(int*, int*);
void print(void);

int main() {

  //Driver program

  int *array = NULL;
  int top = -1;

  push(array, &top, ONE);
  push(array, &top, TWO);
  push(array, &top, THREE);

  printf("Pushed values: %d, %d, %d\n", ONE, TWO, THREE);

  printf("Popped values: %d, %d, %d\n", pop(array, &top), pop(array, &top), pop(array, &top));

  return 0;

}

void push(int *array, int *top, int value) {

  if(array == NULL) {

    array = (int*) malloc(sizeof(int));
    *array = value;
    ++(*top);

  }
  else {

    *(array + (++(*top))) = value;

  }

}

int pop(int *array, int *top) {

  if(*top < 0) {

    printf("Stack empty\n");
    return -1;

  }

  else {print();

    //return *(array + ((*top)--));
    return *array;

  }

}

void print(){
  printf("test");
}





