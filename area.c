
#include <stdio.h>

#define PI 3.14

int main() {
   float radius, side, length, width;
   float circle_area, circle_perimeter, square_area, square_perimeter, rectangle_area, rectangle_perimeter;

   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);

   printf("Enter the side length of the square: ");
   scanf("%f", &side);

   printf("Enter the length and width of the rectangle: ");
   scanf("%f %f", &length, &width);

   circle_area = PI * radius * radius;
   circle_perimeter = 2 * PI * radius;

   square_area = side * side;
   square_perimeter = 4 * side;

   rectangle_area = length * width;
   rectangle_perimeter = 2 * (length + width);

   printf("Circle Area: %.2f\n", circle_area);
   printf("Circle Perimeter: %.2f\n", circle_perimeter);

   printf("Square Area: %.2f\n", square_area);
   printf("Square Perimeter: %.2f\n", square_perimeter);

   printf("Rectangle Area: %.2f\n", rectangle_area);
   printf("Rectangle Perimeter: %.2f\n", rectangle_perimeter);

   return 0;
}
