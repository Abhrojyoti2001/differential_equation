/*R-K Method of order 4*/
#include<stdio.h>
#include<math.h>
float f(float x, float y)
{
	return ((y-x)/(y+x));}
main()
{	float x0,y0,xn,k1,k2,k3,k4,h;	
	printf("Enter X0,Y0,Xn: ");
	scanf("%f%f%f",&x0,&y0,&xn);
	printf("Enter the step Length: ");
	scanf("%f",&h);
	/*Calculation the value of the following Ordinary Differential equation*/
	do
		{k1=h*f(x0,y0);
		k2=h*f((x0+h/2),(y0+k1/2));
		k3=h*f((x0+h/2),(y0+k2/2));
		k4=h*f((x0+h),(y0+k3));
		y0=y0+(k1+2*(k2+k3)+k4)/6;
		x0=x0+h;
		}
	while(x0<xn);	
	/*Printing the value of Ordinary Differential equation*/
	printf("The value of Y0 is=%.3f",y0);
}
