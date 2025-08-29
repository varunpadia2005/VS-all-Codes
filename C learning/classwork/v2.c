#include<stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
int main() {
    struct Time t1, t2;
    int add_h,add_m,add_s;

    printf("Input the first time (proper format): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Input the second time (proper format): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    add_s = t1.seconds + t2.seconds;
    add_m = t1.minutes + t2.minutes + (add_s/60);
    add_h = t1.hours + t2.hours + (add_m/60);

    printf("Output\n");
    printf("Entered 1st time in proper format \n");
    printf("%d:%d:%d \n",t1.hours,t1.minutes,t1.seconds);

    printf("Entered 2nd time in proper format \n");
    printf("%d:%d:%d \n",t2.hours,t2.minutes,t2.seconds);

    printf("\nResultant Time: %d : %d : %d\n", add_h, (add_m%60), (add_s%60));
    return 0;
}