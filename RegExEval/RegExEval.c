#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define true  1
#define false 0

int RegExEval(char*, char*);

int main() {

  int status = 0;

  status = RegExEval("abc","abc");

  if(status == 3) {
    printf("Error! Symbol not supported!\n");
    exit(0);
  }

  if(status)
    printf("The string matches the RegEx %d returned\n", status);
  else
    printf("The string does not match the RegEx %d returned\n", status);

  return 0;
}

int RegExEval(char *re, char *str) {

  /*if (!strcmp(re,str))
    return true;
  else
    return false;*/

  int REsize  = 0;
  int Ssize   = 0;
  int i       = 0;
  int loc     = 0;

  REsize = strlen(re);
  Ssize  = strlen(str);

  for(i = 0; i < REsize; i++) {
    while(loc < Ssize) {
    }
  }
}
