#include<iostream>

using namespace std;

// int factorial(int x){
//     if (x==0)
//     return 1;
//     else{
//        return (factorial (x-1)*x);
//     }
// }

// int main(){
//     int ans=0;
//     ans = factorial(6);
//     cout <<ans<<endl;
//     return 0;
    

// }


void func(int n){
    if (n>0){
        
        func(n-1);
        printf("%d",n);
    }
}

int main(){
    int x=3;
    func(x);
    return 0;

}