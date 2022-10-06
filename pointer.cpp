#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    // int A[5]={2,4,6,8,10};
    int *p;
    char *c;
    float *f;
    double *d;
    struct rectangle *s;

    // int k = 2;
    // p=A;/*similar to p=&A[0]*/
    // p = (int *)(malloc(5 * sizeof(int)));  array formation in heap through c
    // p[0]=2,p[1]=4,p[2]=6,p[3]=8,p[4]=10;
    // p=new int[5];
    /*  // for (int j = 0; j < 5; j++)
      {
          p[j] = k;
          k += 2;
      }
      for (int i = 0; i < 5; i++)
          cout << p[i] << endl; // cout << A[i] << endl;

      // int a = 10;
      // int *p;
      // p = &a;
      // cout << a << endl;
      /* cout << p << endl;
       cout << &a << endl;
       printf("%d", *p);
       printf("%d", p);*/
    // delete []p;*/
    cout << sizeof(p) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(s) << endl;

    return 0;
}