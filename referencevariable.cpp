#include<iostream>
using namespace std;
int main(){
   int a;
   a=115;
   cout << "a is =" << a << endl;
   int &b=a;
   cout << "b is " << b << endl;
   b=b*10;
   cout << "a after multiplication " << a << endl;
   cout <<&a<< endl;
   cout <<&b<< endl;
   cout <<a<< endl;
   cout <<b<< endl;
   //cout <<*a<< endl;
   //cout <<*b<< endl;
   return 0;
}