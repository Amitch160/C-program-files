#include<stdio.h>

using namespace std;


bool isPalindrome(int x){
     int digit=0,sum=0,temp=x;
    while(x>0){
       
        digit = x%10;
        sum =sum*10+digit;
        x /=10;
    }
    if(temp==sum)
        return 1;
    else
        return 0;

}

int main(){
    int res;
    res = isPalindrome(5225);
    printf("%d",res);
    
    return 0;

}