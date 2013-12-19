#include<stdio.h>
#include<string.h>
#define DISP 5
int main() {
  int size,i;
  FILE *textFile;
  char input[1024];
  char epass[32];
  const char pass[32]="password";
  printf("Enter password to decrypt\n");
  scanf("%s",epass);
  if(!strcmp(pass, epass))  {
    textFile=fopen("message.txt","r");
    fseek(textFile, 0L, SEEK_END);
    size=ftell(textFile);
    fseek(textFile, 0L, SEEK_SET);
    fread(input, 1, size, textFile);
    fclose(textFile);
    for(i=0; i<size && input[i]!='\0'; i++) {
      input[i]-=DISP;
    }
    textFile=fopen("message.txt","w");
    fwrite(input, 1, size, textFile);
    fclose(textFile);
    printf("Successfully decrypted!\n");

    // Uncomment the next line if you want the display of the file contents after decryption
    //printf("The text is: \n%s",input);
  }
  else printf("Wrong password\n");
}
