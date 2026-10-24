#include <stdio.h>
  int main()
  {
  	float length,width,radius,base,height;
  	float area,perimeter;
  	const float PI=3.14159f;
  	printf("enter rectangle length and width");
  	scanf("%f%f",&length,&width);
  	printf("Rectangle area=%2f\n",length*width);
  	printf("enter circle radius:");
  	scanf("%f",&radius);
  	printf("circle area =%2f\n",PI*radius*radius);
  	printf("enter triangle base and height:");
  	scanf("%f%f",& base,&height);
  	area=0.5f*base*height;
  	printf("triangle area=%.2f\n",area);
  	return 0;
  }