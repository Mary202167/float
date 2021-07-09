#include<stdio.h>
float rectamgle(int l,int w);
int main()
{
	int length;
	int width;
	printf("enter the length of a rectangle");
	scanf("%d",&length);
	printf("enter width of a rectangle");
	scanf("%d",&width);
	printf("the perimeter of rectangle is %f");
	return 0;
}
float rectangle(int l, int w)
{
	float perimeter;
	perimeter=2*(l+w);
	return perimeter;
}
