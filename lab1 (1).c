#include <stdio.h>
#include <math.h>

void task23() {
    float x, y;
    printf("задание 23\n");
    printf("x = ");
    scanf("%f", &x);
    y = x - 10 * sin(x) + fabs(x * x * x * x - x * x * x * x * x);
    printf("ответ: %f\n", y);
}

void task26() {
    float z, y;
    printf("задание 26\n");
    printf("z = ");
    scanf("%f", &z);
    y = cos(sin(1 / z)) * cos(sin(1 / z));
    printf("ответ: %f\n", y);
}

void task27() {
    float x, y, z, a, b, c, d, f, r;
    printf("задание 27\n");
    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    printf("z = ");
    scanf("%f", &z);
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    printf("d = ");
    scanf("%f", &d);
    printf("f = ");
    scanf("%f", &f);
    r = cos(x) * cos(x) / sin(x) - x * y * z + (a * x * x + b * x + c) / (d * x * x * x - f);
    printf("ответ: %f\n", r);
}

void task30() {
    float v0, t, a, s;
    printf("задание 30\n");
    printf("v0 = ");
    scanf("%f", &v0);
    printf("t = ");
    scanf("%f", &t);
    printf("a = ");
    scanf("%f", &a);
    s = v0 * t + a * t * t / 2;
    printf("ответ: %f\n", s);
}

void task49() {
    float a, x, y;
    printf("задание 49\n");
    printf("a = ");
    scanf("%f", &a);
    printf("x = ");
    scanf("%f", &x);
    y = pow(tan(a), cos(2 * x) / a);
    printf("ответ: %f\n", y);
}

int main() {
    task23();
    task26();
    task27();
    task30();
    task49();
    return 0;
}
