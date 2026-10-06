AREA OF CIRCLE

#include <stdio.h>
struct circle
{
    float radius;
    float area;
};
typedef struct circle Circle;
Circle input_circle()
{
    Circle c;
    printf("Enter the radius: ");
    scanf("%f", &c.radius);
    return c;
}
void compute_area(Circle *c)
{
    c->area = 3.14 * c->radius * c->radius;
}
void print_circle(Circle c)
{
    printf("Radius = %.2f\n", c.radius);
    printf("Area of circle = %.2f\n", c.area);
}
int main()
{
    Circle c;
    c = input_circle();
    compute_area(&c);
    print_circle(c);
    return 0;
}
