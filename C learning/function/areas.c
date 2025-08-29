#include<stdio.h>
#include<math.h>
void circle(float r);
void rectangle(float l, float b);
void square(float s);
void triangle(float b, float h);
void cylinder(float r, float h);
void parallelogram(float b, float h, float d1, float d2);
void rombus(float s);
void sphere();
void cone();
void cube(float s);
void cuboid(float l, float b, float h);
void kite();
int main() {
    int e;
    float r,l,b,s,a,h,d1,d2;
    printf("Enter 1 for circle, 2 for rectangle, 3 for square, 4 for triangle & 5 for cylinder \n");
    scanf("%d", &e);
    if(e==1) {
        printf("Enter the value of the radius \n");
        scanf("%f", &r);
        circle(r);
    }
    else if(e==2) {
        printf("Enter the value of the lenght and breadth \n");
        scanf("%f %f", &l, &b);
        rectangle(l,b);
    }
    else if(e==3) {
        printf("Enter the value of the side \n");
        scanf("%f", &s);
        square(s);
    }
    else if(e==4) {
        printf("Enter the value of the base and height \n");
        scanf("%f %f", &b, &h);
        triangle(b,h);
    }
    else if(e==5) {
        printf("Enter the value of the radius and height \n");
        scanf("%f %f", &r, &h);
        cylinder(r,h);
    }
    else if(e==6) {
        printf("Enter the value of the radius, height, diagonal 1 & diagonal 2 \n");
        scanf("%f %f %f %f", &r, &h, &d1, &d2);
        parallelogram(r,h,d1,d2);
    }
    else if(e==7) {
        printf("Enter the value of the radius and height \n");
        scanf("%f %f", &r, &h);
        cylinder(r,h);
    }
    else {
        printf("Invalid input");
    }
}
void circle(float r) {
    float a;
    a=3.14*r*r;
    printf("The area of the circle is %f",a);
}
void rectangle(float l, float b) {
    float a;
    a=l*b;
    printf("The area of the rectangle is %f",a);
}
void square(float s) {
    float a;
    a=s*s;
    printf("The area of the square is %f",a);
}
void triangle(float b, float h) {
    float a;
    a=0.5*b*h;
    printf("The area of the triangle is %f",a);
}
void cylinder(float r, float h) {
    float a;
    a=(2*3.14*r*h)+(2*3.14*r*r);
    printf("The area of the cylinder is %f",a);
}
void parallelogram(float b, float h, float d1,float d2) {
    float a;
    a=(2*3.14*r*h)+(2*3.14*r*r);
    printf("The area of the cylinder is %f",a);
}
void rombus(float r, float h) {
    float a;
    a=(2*3.14*r*h)+(2*3.14*r*r);
    printf("The area of the cylinder is %f",a);
}
void sphere(float r, float h) {
    float a;
    a=(2*3.14*r*h)+(2*3.14*r*r);
    printf("The area of the cylinder is %f",a);
}
void cone(float r, float h) {
    float a;
    a=(2*3.14*r*h)+(2*3.14*r*r);
    printf("The area of the cylinder is %f",a);
}
