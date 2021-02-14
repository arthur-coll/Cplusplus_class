#include <iostream>
#include <vector>
using namespace std;


//Assignment 6:
class Shape{
  protected:
    string color;
    bool filled;
  public:
    //Default Constructor
    Shape(): color{"green"}, filled{false} {}

    //Constructor
    Shape(string user_color,bool user_filled): color{user_color}, filled{user_filled}{}
    
    //Getters functions
    string get_color(){return color;}
    bool get_filled(){return filled;}

    //Setters functions
    void set_color(string x){color=x;}
    void set_filled(bool x){filled=x;}

    //print method
    void print(){cout<<"Color: "<<get_color()<<endl;}

    //empty methods
    double getArea(){return 0;}
    double getPermimeter(){return 0;}
};

class Circle: public Shape{
  private:
    double radius;
  public:
    //Default Constructor
    Circle(): radius{1.0} {}
    //Constructor
    Circle(double user_radius): radius{user_radius}{}
    //Copy Constructor
    Circle(const Circle &c2): radius{c2.radius}{}

    //Getters function
    double get_radius(){return radius;}
    //Setters functions
    void set_radius(double x){radius=x;}

    //Area/Perimeters
    double getArea(){return M_PI*pow(radius,2);}
    double getPermimeter(){return 2*M_PI*radius;}

    //Print
    void print(){
      Shape::print();
      cout<<"Area: "<<getArea()<<"  Permieter: "<<getPermimeter()<<endl;
    }

};

class Rectangle: public Shape{
  private:
    double length;
    double width;
  public:
    //Default Constructor
    Rectangle(): length{1.0}, width{1.0} {}
    //Constructor
    Rectangle(double user_length, double user_width): length{user_length}, width{user_width}{}
    //Copy Constructor
    Rectangle(const Rectangle &c2): length{c2.length}, width{c2.width}{}

    //Getters function
    double get_width(){return width;}
    double get_length(){return length;}
    //Setters functions
    void set_width(double x){width=x;}
    void set_length(double x){length=x;}

    //Area/Perimeters
    double getArea(){return width*length;}
    double getPermimeter(){return 2*length+2*width;}
    //Print
    void print(){
      Shape::print();
      cout<<"Length: "<<length<<"  Width: "<< width <<endl;
      cout<<"Area: "<< getArea() <<"  Permieter: "<< getPermimeter() <<endl;
    }

};

class Square: public Rectangle{
  public:
    //Default Constructor
    Square(): Rectangle(){}
    //Constructor
    Square(double user_length): Rectangle(user_length,user_length) {}

    //Print function
    void print(){
      Shape::print();
      cout<<"Side: "<<get_length()<<endl;
      cout<<"Area: "<< getArea() <<"  Permieter: "<< getPermimeter() <<endl;}  

    //Setters
    void set_width(double x){Rectangle::set_width(x);Rectangle::set_length(x);}
    void set_length(double x){Rectangle::set_width(x);Rectangle::set_length(x);}
};