#include<stdio.h>
#include<time.h>
int main() {

  // Variable declarations
  int hours   =   0;
  int minutes =   0;
  int seconds =   0;
  int i       =   0;

  // clrscr()
  system("clear");

  printf("Enter the hours, minutes and seconds and press enter\n");
  scanf("%d%d%d",&hours,&minutes,&seconds);

  // Count the number of seconds
  i = seconds + (minutes * 60) + (hours * 60 * 60);
  i++;

  // print out the time for each second having a delay of 1 second
  while(i) {
    i--;
    system("clear");
    printf("\nH: %d m: %d s: %d",i / 3600, (i % 3600) / 60, (i % 3600) % 60);
    sleep(1);
  }

  system("clear");
  printf("\n\nkAbOOm\n");
}
