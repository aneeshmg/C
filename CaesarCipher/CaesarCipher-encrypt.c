#include<stdio.h>

#define DISP 5

int main() {

  int size          =   0;
  int i             =   0;

  FILE *textFile    =   NULL;
  char input[1024];

  textFile = fopen("message.txt", "r");
  fseek(textFile, 0L, SEEK_END);
  size = ftell(textFile);
  fseek(textFile, 0L, SEEK_SET);
  fread(input, 1, size, textFile);
  fclose(textFile);

  for(i = 0; i < size && input[i] != '\0'; i++) {
    input[i] += DISP;
  }

  textFile = fopen("message.txt","w");
  fwrite(input, 1, size, textFile);
  fclose(textFile);

  printf("Successfully encrypted!\n");
}
