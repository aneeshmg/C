#include<stdio.h>

int main() {

  int date    =   0;
  int edate   =   0;
  int month   =   0;
  int emonth  =   0;
  int yr      =   0;
  int eyr     =   0;
  int day     =   0;

  printf("Enter the date in this format dd/mm/yr\n");
  scanf("%d%d%d",&edate,&emonth,&eyr);

  eyr   %= 100;
  date  += edate;

  if(emonth <= 12 && emonth >= 1) {
    while(month != emonth) {
      switch(month){
        case 1: date += 31;
          break;

        case 2: if(eyr % 4 == 0) {
                date += 29;
              }
              else
                date += 28;
          break;

        case 3: date += 31;
          break;

        case 4: date += 30;
          break;

        case 5: date += 31;
          break;

        case 6: date += 30;
          break;

        case 7: date += 31;
          break;

        case 8: date += 31;
          break;

        case 9: date += 30;
          break;

        case 10: date += 31;
          break;

        case 11: date += 30;
          break;

        case 12: date += 31;
          break;

        default: date+=0;
      }
      month++;
    }
  }
  else
    printf("Incorrect month entered\b");

  if(eyr <= 50 && emonth >= 0) {
    for(yr = 0; yr != eyr; yr++) {
      if(yr % 4 == 0)
        date += 366;
      else
        date += 365;
    }
  }
  else
    printf("The entered year is out of range!\n");

  day = date % 7;
  switch(day) {
    case 1: printf("The day is a Saturday\n");
      break;

    case 2: printf("The day is a Sunday\n");
      break;

    case 3: printf("The day is a Monday\n");
      break;

    case 4: printf("The day is a Tuesday\n");
      break;

    case 5: printf("The day is a Wednesday\n");
      break;

    case 6: printf("The day is a Thursday\n");
      break;

    case 7: printf("The day is a Friday\n");
      break;

    default: break;
   }
}
