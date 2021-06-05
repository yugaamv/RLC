#include<conio.h>
#include<stdio.h>
#include<math.h>
double w1,w2,w,f1,f2,f,qf,bw,r;
double l,c;
int seriesf();
int parallelf();
int seriesf()
{
double y,z;
z=(((r*r)/(4*l*l))+(1/(l*c)));
y=fabs(sqrt(z));
w1=(-r/(2*l))+y;
w2=(r/(2*l))+y;
bw=(r/l)/(2*M_PI);
return 0;
}
int parallelf()
{
double y,z;
z=((1/(4*r*r*c*c))+(1/(l*c)));
y=fabs(sqrt(z));
w1=(-1/(2*r*c))+y;
w2=(1/(2*r*c))+y;
bw=(1/(r*c))/(2*M_PI);
return 0;
}
void main()
{
double x;
int choise;
printf("******* RLC Circuit *******");
printf("\nchoose one \n1.series\n2.parallel\n");
scanf("%d",&choise);
printf("\nEnter the value of R L C\n");
scanf("%lf %lf %lf",&r,&l,&c);
switch(choise)
{
case 1:seriesf();
break;
case 2:parallelf();
break;
default:printf("Enter a valid choise :\n");
}

//finding w
     x=fabs(sqrt(l*c));
     w=(1/x);
//QF
   qf=(w/(bw*2*M_PI));
//f1 f2 f
f1=(w1/2*M_PI);
f2=(w2/2*M_PI);
f=(w/2*M_PI);
printf("\nResult\nResonant Frequency :%lf hz\nUpper cutoff :%lf hz\nLower cutoff :%lf hz\nQuality Factor :%lf\nBandwidth :%lf hz",f,f1,f2,qf,bw);
}
