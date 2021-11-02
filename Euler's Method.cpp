/*Euler's Method*/
#include<stdio.h>
#include<math.h>
float f(float x, float y)
{
	return ((y-x)/(y+x));}
main()
{	float x0,y0,xn,h;	
	printf("Enter X0,Y0,Xn: ");
	scanf("%f%f%f",&x0,&y0,&xn);
	printf("Enter the step Length: ");
	scanf("%f",&h);
	/*Calculation the value of the following Ordinary Differential equation*/
	do
		{y0=y0+h*f(x0,y0);
		x0=x0+h;
		}
	while(x0<xn);
	/*Printing the value of Ordinary Differential equation*/
	printf("The Value of Yn is=%.3f",y0);
}
