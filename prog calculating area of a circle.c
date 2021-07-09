#include<stdio.h>
floatarea(int r);
int main()

{
	float radius,area;
	printf("enter the radius of a circle");
	scanf("%f",& radius);
		area=3.142*radius*radius;
	printf("calculate area of a circle=%0.2f");

	return 0;
}
	float area(int r)	
	{
		float area;
		area=3.142* r*r;
		return area;
	}

	
