#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double sonarDistance;
    double sonarAngle;
    double objectDepth;
    double surfaceDistance;

    printf("*******************************************************************************\n");
    printf("*  Enter in the sonar distance and the sonar angle when prompted.             *\n");
    printf("*  Enter in the sonar distance in meters:");
    scanf("%lf", &sonarDistance);
    printf("*  Enter in the sonar angle in degrees:");
    scanf("%lf", &sonarAngle);
    printf("*******************************************************************************\n");

    sonarAngle = (sonarAngle * M_PI) / 180.0;
    objectDepth = sin(sonarAngle) * sonarDistance;
    surfaceDistance = sqrt((sonarDistance * sonarDistance) - (objectDepth * objectDepth));

    printf("*  The target is %08.3lf meters deep.                                        *\n", objectDepth);
    printf("*  The target is %08.3lf meters from the dive location.                      *\n", surfaceDistance);
    printf("*******************************************************************************\n");
    printf("*  The program has completed.                                                 *\n");
    printf("*******************************************************************************\n");
    return 0;
}