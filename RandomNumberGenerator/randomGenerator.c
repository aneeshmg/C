#include<stdio.h>
#include<time.h>
#define true 1
#define false 0
void out(float);
int main() {
  float f;
  printf("\tEnter a number\n\t");
  scanf("%f",&f);
  f/=100;
  while(true) {
    switch((int)(f*100)%10) {
      case 1:f*=229;
        break;
      case 2:f*=907;
        break;
      case 3:f*=881;
        break;
      case 4:f*=677;
        break;
      case 5:f*=347;
        break;
      case 6:f*=103;
        break;
      case 7:f*=983;
        break;
      case 8:f*=709;
        break;
      case 9:f*=331;
        break;
      default:f*=1129;f+=13;
    }
    if(f>1) f-=(int)f;
    out(f);
    sleep(1);
  }
}
void out(float f) {
  printf("\t\t%f\n",f*1000000);
}
