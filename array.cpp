#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int a[5] = {1, 2, 3}; // takes a[3]=0 and a[4]=0
    //int a[5];
    a[0]=1,a[1]=2,a[2]=3;       // takes a[3] and a[4]  as garbage value otherwise

    cout << a[3] << endl;
    printf("%d\n", a[4]);
    cout << sizeof(a) << endl;

    return 0;
}