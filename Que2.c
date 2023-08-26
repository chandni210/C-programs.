#include<stdio.h>


//function prototype declaration.
float  Area_Triangle (float ,float );             
float Area_Circle(float);   
int isSquareOrRectangle(float ,float,float ,float);



int main()
{ 

float x,y,area1;
 printf("Enter the Sides of Triangle:\n");
 scanf("%f %f",&x,&y);
 area1=Area_Triangle(x,y);                   //function calling.
 printf(" Area of tringle is:%f\n",area1);


float R,area2;
  printf("Enter the radius of circle:\n");
  scanf("%f",&R);
  area2= Area_Circle(R);                     //function calling.
  printf("Area of circle is:%f\n",area2);


float side1, side2, side3, side4;
    printf("Enter the four side lengths of the quadrilateral: ");
    scanf("%f %f %f %f", &side1, &side2, &side3, &side4);

    int shapeType = isSquareOrRectangle(side1, side2, side3, side4); //function calling.
    if (shapeType == 1) {
        printf("The quadrilateral is a square.\n");
        printf("Area is:%f",side1*side1);
    } else if (shapeType == 2) {
        printf("The quadrilateral is a rectangle.\n");
        printf("Area is:%f",side1*side2);
    } else {
        printf("The quadrilateral is neither a square nor a rectangle.\n");
    }

    return 0;
}








//function to find the area of triangle.

   float Area_Triangle(float a,float b)
{
   float A;
   A= a*b/2.0;
   return A;
}


//function to find the area of triangle.
 
   float Area_Circle(float r)
 {
   float A;
   A= 3.14*r*r;
   return A;
 }

 

 

// Function to check if the quadrilateral is a square or rectangle
 

    int isSquareOrRectangle(float a, float b, float c, float d)
 {
    if (a == b && b == c && c == d) {
        return 1; // All sides are equal, so it's a square
    } else if (a == c && b == d) {
        return 2; // Opposite sides are equal, so it's a rectangle
    } else {
        return 0; // Neither a square nor a rectangle
    }
}