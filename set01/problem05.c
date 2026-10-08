//Find the area of the largest of three circles.
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

float largest_of_three_circle(Circle c1, Circle c2, Circle c3)
{
    float largest = c1.area;

    if (c2.area > largest)
        largest = c2.area;

    if (c3.area > largest)
        largest = c3.area;

    return largest;
}

void display_area(Circle c1, Circle c2, Circle c3, float largest)
{
    printf("Circle 1 Area=%.2f\n", c1.area);
    printf("Circle 2 Area = %.2f\n", c2.area);
    printf("Circle 3 Area = %.2f\n", c3.area);
    printf("Largest Circle Area = %.2f\n", largest);
}

int main()
{
    Circle c1, c2, c3;
    float largest;

    c1 = input_circle();
    c2 = input_circle();
    c3 = input_circle();

    compute_area(&c1);
    compute_area(&c2);
    compute_area(&c3);

    largest=largest_of_three_circle(c1, c2, c3);

    display_area(c1, c2, c3, largest);

    return 0;
}
