#include <stdio.h>
struct pair 
{
    int x;
    int y;
};

void swap(struct pair *p) 
{
    int temp = p->x;
    p->x = p->y;
    p->y = temp;
}

int main() 
{
    struct pair p;
    printf("Enter two numbers: ");
    scanf("%d %d", &p.x, &p.y);
    printf("Before swapping: x = %d, y = %d\n", p.x, p.y);
    swap(&p);
    printf("After swapping: x = %d, y = %d\n", p.x, p.y);
}

