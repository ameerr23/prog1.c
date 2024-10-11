//Вычисление площади треугольника 
#include <stdio.h> 
int main()
{
float l,w; //lenght and width of the rectangle
float s; //area of a rectangle

printf("\ncalculating the area of a  rectangle\n");
printf("enter the initial data:\n");
printf("lenght (sm.) -> ");
scanf("%f" ,&l);
printf("wedth (sm.) -> ");
scanf("%f" ,&w);
s= l * w;
printf("Area of a parallelogram: %10.2f kv.sm\n", s);

}
