/*
#include <iostream>
#include<cmath>
#include "header.hpp"

using namespace std;

bool only_digit(string mystring){
  for (int i=0;i<mystring.length();i++){
    if (mystring.at(i) < '0' || mystring.at(i) > '9'){
      cout<<"Not only digit";
      return false;
    }
  }
  cout<<"Only digit";
  return true;
}
int pairs(string mystring,string sub){
  int it=0,c=0;
    while(it!=1){
      it=mystring.find(sub,it)+sub.length();
      c++;
    }c-=1;
    return c;
}

int main(){
//string str1="dfdabf8987ffacbuut";
//Question 1: Test if a string only contains digits
//only_digit(str1);

//Question 2: Find the number of pairs
//cout << pairs(str1,"ab");

//Question 3: Point class
//Point p1{};
//cout<< p1.distance(4.1,1.9)<<endl;
//Point p2{12.1,-5.1};
//p2.display();

//Question 4: Circle
Circle c1{1,1,4};
cout<<"Area: "<<c1.area()<<endl;
cout<<"Circumference: "<<c1.circumference()<<endl;
cout<<c1.inside(30,2);
}
//class defined for practicla 5
class Point{
  private:
    double x;
    double y;
  public:
  Point()=default;
  Point(double ux,double uy){
    x=ux;y=uy;
  }
  double distance(double user_x, double user_y){
    return pow(pow(user_x -x,2)+ pow(user_y -y,2),0.5);
  }
  void display(){
    std::cout<<"x="<< x << " y="<<y<<std::endl;
  }
};

class Circle{
  private:
  double center_x;double center_y;double radius;
  public:
  Circle()= default;
  Circle(double x,double y,double rayon){
    center_x=x,center_y=y,radius=rayon;
  }
  double area(){
    return M_PI*pow(radius,2);
  }
  double circumference(){
    return 2*M_PI*radius;
  }
  bool inside(double user_x, double user_y){
    Point p1(center_x,center_x);
    if (p1.distance(user_x,user_y)<= radius){
      std::cout<<"Point dans le cercle"<<std::endl;
      return true;}
    else{std::cout<<"Point hors du cercle"<<std::endl;
      return false;}
    }
};
*/