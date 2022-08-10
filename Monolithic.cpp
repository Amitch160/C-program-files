#include <stdio.h>

#include <iostream>

using namespace std;



struct rectangle{
    int length;
    int breadth;

};

void initialize(struct rectangle *r,int l,int b){
    r->length = l;
    (*r).breadth = b;
}

int Area(struct rectangle r)
{
    return r.length * r.breadth;
}
int perimeter(struct rectangle r)
{
    return 2 * (r.length + r.breadth);
}

int main()
{
    // int length = 0, breadth = 0;
    rectangle r={0,0};

    printf("Enter length and breadth:");
    int l,b;

    cin >> l >>b;
    initialize(&r,l,b);

    // int area = length*breadth;
    // int peri = 2*(length+breadth);

    int area = Area(r);
    int peri = perimeter(r);

    printf("Area = %d\nPerimeter = %d\n", area, peri);

    return 0;
}