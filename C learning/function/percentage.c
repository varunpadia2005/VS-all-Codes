#include<stdio.h>
float percentage(float m, float s,float sci);

float main() {
    float m,s,sci,per;
    printf("Enter the marks obtained in maths, sanskrit, science ");
    scanf("%f %f %f", &m, &s, &sci);
    per=percentage(m,s,sci);
    printf("The percentage you obtained %f",per);
    return 0;
}
float percentage(float m, float s,float sci) {
    float t,p;
    t=m+s+sci;
    p=t/3;
    return p;
}