#include <iostream>

using namespace std;

int * fun(int size)


{
    int *p;
    p = new int[size];
    for(int i=0;i<size;i++)
    p[i]=i+1;

    return p;
    //A[0]=15;
    //for (int i=0;i<n;i++)
        //cout << A[i] << endl;
    // cout << sizeof(A) / sizeof(int) << endl;
}

int main()
{

   // int A[] = {2, 4, 6, 8, 10};
    //int n = 5;
    //fun(A,n);
    //cout << sizeof(A) / sizeof(int) << endl;

    //for (int x : A)
      //  cout << x << " ";
      int *ptr,sz=7;
      ptr = fun(sz);
      for(int i=0;i<sz;i++)
      cout<<ptr[i]<<endl;
      
    return 0;
}