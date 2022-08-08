#include <iostream>
using namespace std;

int main()
{
  int marks[] = {23, 34, 45, 54};
  int mathmarks[4];
  mathmarks[0] = 19;
  mathmarks[1] = 15;
  mathmarks[2] = 12;
  mathmarks[3] = 18;
  //  cout<<"these are mathmarks"<<endl;
  // cout<<mathmarks[0]<<endl;
  // cout<<mathmarks[1]<<endl;
  // cout<<mathmarks[2]<<endl;
  // cout<<mathmarks[3]<<endl;
  //  cout<<"these are marks"<<endl;
  // cout<<marks[0]<<endl;
  // cout<<marks[1]<<endl;
  // cout<<marks[2]<<endl;
  // cout<<marks[3]<<endl;
  // for (int i = 0; i < 4; i++)
  // {
  //   cout<<"the vale of marks  "<<i<<" is "  << marks[i]<<endl;
  // }
  int i = 0;
  while (i < 6)
  {
    
    cout << marks[i] << endl;

    // cout << mathmarks[i] << endl;
   // cout << mathmarks[4]<<endl;
   i++;

  }

//pointer and arrayes

// int*p =marks;
// cout <<"the value of *p is "<<*p<<endl;
// cout <<"the value of (p+1) is "<<(p+1)<<endl;
// cout <<"the value of (p+2) is "<<(p+2)<<endl;
// cout <<"the value of (p+3) is "<<(p+3)<<endl;


//for math marks 


// int*y = mathmarks;
// cout<<*y<<endl;

// cout<<*(y+1)<<endl;

// cout<<*(y++)<<endl;

// cout<<*(++y);

// cout <<"the value of *y is "<<*y<<endl;
// cout <<"the value of (y+1) is "<<(y+1)<<endl;
// cout <<"the value of (y+2) is "<<(y+2)<<endl;
// cout <<"the value of (y+3) is "<<(y+3);

  return 0;
}