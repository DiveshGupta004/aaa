#include <stdio.h>

#define PI 3.14159

float calculate_area(float radius);
float calculate_circumference(float radius);

int main() {
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = calculate_area(radius);
    circumference = calculate_circumference(radius);

    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);
gvghvgh fghjcgfdxzeszdxfcv fcfhcuc
    return 0;
}

float calculate_area(float radius) {
    return PI * radius * radius;
}

float calculate_circumference(float radius) {
    return 2 * PI * radius;
}
