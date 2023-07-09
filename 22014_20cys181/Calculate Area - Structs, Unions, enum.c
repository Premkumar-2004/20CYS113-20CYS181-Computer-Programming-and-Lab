#include<stdio.h>
#include<math.h>

// Define a structure to represent different shapes
struct Shape
{
	enum type { Circle = 1, Rectangle } t; // Shape type (Circle or Rectangle)
	union dimensions {
		float length[2]; // Dimensions for Rectangle (length and breadth)
		float radius; // Dimension for Circle (radius)
	} d;
} s;

int main() {
	float area;
	
	// Read the shape type from the user
	printf("Enter shape type (1 for Circle, 2 for Rectangle): ");
	scanf("%d", &s.t);
	
	if (s.t == 2) {
		// Calculate area for Rectangle
		printf("Enter length and breadth of the Rectangle: ");
		scanf("%f", &s.d.length[0]);
		scanf("%f", &s.d.length[1]);
		area = s.d.length[0] * s.d.length[1];
		printf("Area of the rectangle: %.4f units\n", area);
	}
	else if (s.t == 1) {
		// Calculate area for Circle
		printf("Enter the radius of the Circle: ");
		scanf("%f", &s.d.radius);
		area = 3.14 * pow(s.d.radius, 2);
		printf("Area of the circle: %.4f units\n", area);
	}
	else {
		printf("Invalid choice!\n");
	}
	
	return 0;
}