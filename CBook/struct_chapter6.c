#include<stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point p1;
    struct point p2;
};


int main() {
struct point p1 = {1,2};
struct point p2 = {3, 4};
struct point maxpt = {320, 200};
struct point pt;
struct rect r1 = {p1, p2};

printf("%d %d", maxpt.x, maxpt.y);

printf("\n%d", r1.p1.x);

}

// printf("Rectangle such that", r1.p1.x, r1.p1.y);
