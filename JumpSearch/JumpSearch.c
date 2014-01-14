#include<stdio.h>
#define N 256
int main() {

  float   array[N];
  int     D             =   0;
  int     check         =   0;
  float   element       =   0.0;
  int     sizeOfArray   =   0;
  int     i             =   0;
  int     presentFlag   =   1;
  int     left          =   -1;
  int     right         =   -1;

  printf("Enter the size of the array\n");
  scanf("%d",&sizeOfArray);
  printf("Note: The array needs to be sorted\n");

  for(i = 0; i < sizeOfArray; i++) {
    printf("Enter the %d element\n",i+1);
    scanf("%f",&array[i]);
  }

  printf("Enter the element to be searched\n");
  scanf("%f",&element);

  D     = array[sizeOfArray-1] - array[0];
  check = ((element * sizeOfArray) / D) - 1;

  if(check < 0)
    check = 0;

  //i=0;                                Uncomment this line to check the number of iterations required to perform the search

  while(array[check] != element && presentFlag) {
    if(array[check] > element) {
      check--;
      left=check;
    }
    else {
      right=check;
      check++;
    }
    if(left == right)
      presentFlag = 0;

    //printf("Iteration %d\n",++i);     Uncomment this line to check the number of iterations required to perform the search
  }

  for(i = 0; i < sizeOfArray; i++) {
    printf("\t%d => %.2f\n",i+1,array[i]);
  }

  if(presentFlag)
    printf("\nElement %.2f found in position %d\n",element,check+1);
  else
    printf("\nElement %.2f does not exist\n",element);
}
