/*#include<cmath>
#include "headers/p6.hpp"
#include <iostream>
using namespace std;


int main(){
  // Shape s1;

  // Shape s2("blue",true);
  // s2.print();

  // s2.set_color("yellow");
  // s2.print();

  // Circle c1;
  // cout<<c1.get_radius()<<endl;
  // Circle c2(8.0);
  // cout<<c2.get_radius()<<endl;
  // c2.set_radius(2.0);
  // cout<<c2.get_radius()<<endl;

  // cout<<c1.getArea()<<endl;
  // cout<<c1.getPermimeter()<<endl;
  // c1.set_color("yellow");
  // c1.print();

  // Square u1;
  // u1.set_width(4);
  // u1.set_length(4);
  
  // u1.print();
  Shape* array[4];

  Circle c(1.89);
  Shape s("yellow",true);
  Rectangle r(1.5,8.2);
  Square u(1.8);

  array[0]=&c;
  array[1]=&s;
  array[2]=&r;
  array[3]=&u;
  
 for(int i=0;i<4;i++)
   array[i]->print(); 
}
*/