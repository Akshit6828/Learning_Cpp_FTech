#include <stdio.h>
#include <stdlib.h>

int main()
{
char a;
unsigned char b;
int c;
unsigned int d;
short int e;
unsigned short int f;
long int g;
unsigned long int h;
float i;
double j;
long double k;
printf("Enter signed and unsigned Char\n");
scanf("%c %c",&a,&b);
printf("Enter signed and unsigned int\n");
scanf("%d %u",&c,&d);
printf("Enter signed and unsigned short int\n");
scanf("%hd %hu",&e,&f);
printf("Enter signed and unsigned long int\n");
scanf("%ld %lu",&g,&h);
printf("Enter a float,double and long double");
scanf("%f %lf %Lf ",&i,&j,&k);
printf("Printing values\n");
printf("%c\t%c\t%d\t%u\t%d\t%u\t%ld\t%lu%\t%f\t%lf\t%LF",a,b,c,d,e,f,g,h);

    return 0;
}
