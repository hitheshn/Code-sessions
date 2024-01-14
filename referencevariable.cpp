#include<iostream>
using namespace std;
int main(){
   int a;//declared variable - 'a'
   a=115;//assigning value to a
   cout << "a is =" << a << endl;
   int &b=a;//b is reference variable of a
   //b can be used instead of a 
   //any changes made in b will reflect in a
   cout << "b is " << b << endl;
   b=b*10;//updating value of b
   cout << "a after multiplication " << a << endl;
   cout <<&a<< endl;
   cout <<&b<< endl;
   cout <<a<< endl;
   cout <<b<< enddl;
   return 0;
}
