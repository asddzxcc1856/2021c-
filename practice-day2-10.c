#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct point{ //�x�s [�I�y��] ����ƫ��A //�ۭq�q��ƫ��A�W��

    float x,y;

}p;


void input(p*,p*);
void distance(p*,p*);
void slope(p*,p*);


int main (void) // �D�{��
{
    p a1,a2;

    input(&a1,&a2);

    distance(&a1,&a2);

    slope(&a1,&a2);

    return 0;
}

void input(p* a1,p* a2) // ��J
{
    printf("please enter two point x & y location:\n");

    scanf("%f%f%f%f",&a1->x,&a1->y,&a2->x,&a2->y);
}

void distance(p* a1,p* a2) // �D���I�Z��
{
    printf("two points' distance : %f\n", sqrt(pow((a1->x-a2->x),2)+pow((a1->y-a2->y),2)));
}

void slope(p* a1,p* a2) // �D�ײv�B�ײv��{���B�k�u��{��
{
    printf("two points' slope : %f\n", ((*a1).x-(*a2).x)/((*a1).y-(*a2).y));

    printf("two points' Slope equation : %+2.2fx + %2.2fy = %2.2f\n",-((*a1).y-(*a2).y),((*a1).x-(*a2).x),(-((*a1).y-(*a2).y))*(*a1).x+((*a1).x-(*a2).x)*(*a1).y);

    printf("two points' normal equation : %+2.2fx + %2.2fy = %2.2f\n",((*a1).x-(*a2).x),((*a1).y-(*a2).y),((*a1).x-(*a2).x)*(*a1).x+((*a1).y-(*a2).y)*(*a1).y);
}
