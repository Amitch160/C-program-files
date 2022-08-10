#include<iostream>

using namespace std;
 int add(int a,int b) //Function Defition with a,b as Formal parameter
 {
    int c;
    c = a+b;
    return c;

 }

int main(){
    int num1=10,num2=15,sum;
    sum = add(num1,num2);  //Function call with num1 and num2 as actual parameter
    cout << sum;
    return 0;

}