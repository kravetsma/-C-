#include <stdio.h>
#include <math.h>

struct point
{
   	double x, y;
};
typedef struct point Point;
struct triangle
{
    	Point a, b, c;
};
typedef struct triangle Triangle;

void print_point(Point coord)
{
	printf("(%.2f, %.2f)", coord.x, coord.y);
}

void print_triangle(Triangle triangle)
{
	printf("{(%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f)}", triangle.a.x, triangle.a.y,triangle.b.x,triangle.b.y,triangle.c.x,triangle.c.y);
}

float distance(Point a, Point b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

float get_triangle_perimeter(const Triangle* t)
{
	float per = 0;
	per += distance(t->a, t->b);
	per += distance(t->b, t->c);
	per += distance(t->c, t->a);
	return per;
}

float get_triangle_area(const Triangle* t)
{
	float hp = get_triangle_perimeter(t) / 2;
	float compa = hp - distance(t->a, t->b);
	float compb = hp - distance(t->b, t->c);
	float compc = hp - distance(t->c, t->a);
	return sqrt(hp * compa * compb * compc);
}

Triangle moved_triangle(const Triangle* t, Point d)
{
	Triangle t1;
	t1.a.x = t->a.x + d.x;
    	t1.a.y = t->a.y + d.y;
	t1.b.x = t->b.x + d.x;
    	t1.b.y = t->b.y + d.y;
	t1.c.x = t->c.x + d.x;
	t1.c.y = t->c.y + d.y;
	return t1;
}

void move_triangle(Triangle* t, Point d)
{
	t->a.x += d.x;
	t->b.x += d.x;
	t->c.x += d.x;
	t->a.y += d.y;
	t->b.y += d.y;
	t->c.y += d.y;
}

int main()
{
	Point a = {1.00, 0.00};
	Point b = {0.50, 2.0000};
	Point c = {0.000, 1.500};
	Point d = {5, 6};
	Triangle T = {a, b, c};
	printf("1.1\n");
	print_point(a);
	printf("\n");
	printf("1.2\n");
	print_triangle(T);
	printf("\n");
	printf("1.3\n%f\n", distance(a, b));
	printf("1.4\n%f\n", get_triangle_perimeter(&T));
	printf("1.5\n%f\n", get_triangle_area(&T));
	printf("1.6\n");
	print_triangle(moved_triangle(&T, d));
	printf("\n");
	printf("1.7\n");
	move_triangle(&T, d);
	print_triangle(T);
}
