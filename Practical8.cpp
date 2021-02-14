//Practical 8
#include<cmath>
#include <vector>
#include "headers/p8.hpp"
#include <iostream>
using namespace std;

//Assignment 8
int main(){
 Complex c1(2,-1);
 cout<< c1;

 Complex c2(4,-6);
 cout<< c2;

Complex c3=c2+c1;
cout<<(c3);

c3+=c1;
cout<<(c3);

c3/=c1;
cout<<(c3);
}