//Vector Calculator
//17, December 2025
//Physics Program 
//A Simple 2d vector calculator written in C Program.

#include <stdio.h>
#include <math.h>
#define PI 3.1415926535

int main() {
    double v1, a1, v2, a2;
    double x1, y1, x2, y2;
    double Rx, Ry, Resultant, theta;

    printf("--------------------------------\n");
    printf("--Physics - Vectors Calculator--\n");
    printf("--    Created by Jed Ivan     --\n");
    printf("--------------------------------\n");

    printf("(separated by a space, angle in degrees)\n");
    printf("Enter magnitude and angle of vector 1: ");
    scanf("%lf %lf", &v1, &a1);

    printf("Enter magnitude and angle of vector 2: ");
    scanf("%lf %lf", &v2, &a2);

    // Vector Components
    // Cosine - Horizontal
    // Sine - Vertical
    x1 = v1 * cos(a1 * PI / 180.0);
    y1 = v1 * sin(a1 * PI / 180.0);

    x2 = v2 * cos(a2 * PI / 180.0);
    y2 = v2 * sin(a2 * PI / 180.0);

    // Adding Vectors / Components
    Rx = x1 + x2;
    Ry = y1 + y2;

    // Magnitude
    Resultant = sqrt(Rx*Rx + Ry*Ry);

    // Direction (quadrant-safe)
    theta = atan2(Ry, Rx) * 180.0 / PI;    //atan(x) --> Tangent Inverse tan^-1

    // Convert to 0–360°
    //Quadrant I  -> Rx > 0, Ry > 0 -> angle
    //Quadrant II -> Rx < 0, Ry > 0 -> angle + 180 degress
    //Quadrant III -> Rx < 0, Ry < 0 -> angle + 180 degress
    //Quadrant IV  ->  Rx > 0, Ry < 0  -> angle + 360 degress
    if (theta < 0)
        theta += 360;

    // Output
    printf("\nResultant magnitude: %.3f\n", Resultant);
    printf("Resultant direction: %.3f degrees\n", theta);

    return 0;
}  //end of program
