#include<stdio.h>

#define true  1
#define false 0

int RegExEval(char*, char*);

int main() {

  printf("%d",RegExEval("abc","abc"));
}

int RegExEval(char *re, char *str) {

  return (strcmp(re,str));
  //return true;
  //else return false;
}
