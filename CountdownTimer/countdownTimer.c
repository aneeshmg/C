#include<stdio.h>
#include<time.h>
int main() {

  // Variable declaration
  int h,m,s,i;

  // clrscr()
  system("clear");

  printf("Enter the hours, minutes and seconds and press enter\n");
  scanf("%d%d%d",&h,&m,&s);

  // Count the number of seconds
  i=s+(m*60)+(h*60*60);
  i++;

  // print out the time for each second having a delay of 1 second
  while(i) {
    i--;
    system("clear");
    printf("\nH: %d m: %d s: %d",i/3600,(i%3600)/60,(i%3600)%60);
    sleep(1);
  }

  system("clear");
  printf("\n\nkAbOOm\n");
}
