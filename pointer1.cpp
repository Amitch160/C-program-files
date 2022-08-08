#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int a = 10, add = 0;
    int *b = &a;
    int c = 20;
    add = sum(*b, c);
    cout<<add<<endl;

    return 0;
}