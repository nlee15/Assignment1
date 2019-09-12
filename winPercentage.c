//author: Nicolas Lee Wen Han

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char**argv){
double RS=atof(argv[1]);
double RA=atof(argv[2]);
double games=atof(argv[3]);
double actualwins=atof(argv[4]);
double base=0;
double p=0;
double p0=0;
double p1=0;
double p2=0;
double winpercentage1=0;
double winpercentage2=0;
double winpercentage3=0;
double winpercentage4=0;
double predictW=0;
double predictL=0;
double error=0;
double predictW1=0;
double predictL1=0;
double error1=0;
double predictW2=0;
double predictL2=0;
double error2=0;
double predictW3=0;
double predictL3=0;
double error3=0;

for(p=0;p<3;p++){
  if(p=2){
winpercentage1=((pow(RS,p))/((pow(RS,p))+(pow(RA,p))))*100;
predictW=(winpercentage1/100)*games;
predictL=games-predictW;
error=predictW-actualwins;
}
}


for(p0=0;p0<2;p0=p0+0.915){
  if(p=1.83){
  winpercentage2=((pow(RS,p))/((pow(RS,p))+(pow(RA,p))))*100;
  predictW1=(winpercentage2/100)*games;
  predictL1=games-predictW1;
  error1=predictW1-actualwins;
}
}

  p1=1.5*(log10((RS+RA)/games))+0.45;
  winpercentage3=((pow(RS,p1))/((pow(RS,p1))+(pow(RA,p1))))*100;
  predictW2=(winpercentage3/100)*games;
  predictL2=games-predictW2;
  error2=predictW2-actualwins;

base =(RS+RA)/games;

p2=pow(base,0.287);

winpercentage4=((pow(RS,p2))/((pow(RS,p2))+(pow(RA,p2))))*100;
predictW3=(winpercentage4/100)*games;
predictL3=games-predictW3;
error3=predictW3-actualwins;
if(p1<1.5){
  printf("Invalid input\n");
  return 0;
}
printf("p value  Win Percentage  Predicted Wins  Predicted Loss  Error\n");
printf("2.00     %.2f              %.0lf            %.0lf           %.0lf   \n",winpercentage1,predictW,predictL,error);
printf("1.83     %.2f              %.0lf            %.0lf           %.0lf   \n",winpercentage2,predictW1,predictL1,error1);
printf("%.2f     %.2f              %.0lf            %.0lf           %.0lf   \n",p1,winpercentage3,predictW2,predictL2,error2);
printf("%.2f     %.2f              %.0lf            %.0lf           %.0lf   \n",p2,winpercentage4,predictW3,predictL3,error3);


}
