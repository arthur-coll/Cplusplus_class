#include <iostream>
#include <vector>
using namespace std;

//Assignment 8
class    Complex{ 
    private :
      double r ; double i ;
    public :
      Complex(){ this ->r  =  0.0; this ->i  =  0.0;}
      Complex(double u_r,double u_i){ this ->r  =  u_r; this ->i  =  u_i; }

      double  getR()  {return   this ->r;} 
      double  getI(){return    this ->i;}

      // += of complex/complex
      Complex& operator +=(Complex c){
        r+=c.getR();
        i+=c.getI();
        return *this;}

      // += with complex/double
      Complex& operator +=(double u_r){
        r+=u_r;
        return *this;}

      // -= of complex/complex
      Complex& operator -=(Complex c){
        r-=c.getR();
        i-=c.getI();
        return *this;} 

      // -= with complex/double
      Complex& operator -=(double u_r){
        r-=u_r;
        return *this;}

      // *= of complex/complex
      Complex& operator *=(Complex c){
        double s=r;
        r=r*c.getR()-i*c.getI();
        i=s*c.getI()+i*c.getR();
        return *this;} 

      // *= with complex/double
      Complex& operator *=(double u_r){
        r*=u_r;
        i*=u_r;
        return *this;}
      
      // /= of complex/complex
      Complex& operator /=(Complex c){
        double s=r;
        r=(r*c.getR()+i*c.getI())/(pow(i,2)+pow(c.getI(),2));
        i=(-s*c.getI()+i*c.getR())/(pow(i,2)+pow(c.getI(),2));;
        return *this;} 
      
      // /= of complex/double
      Complex& operator /=(double u_r){
        r=(r*u_r)/(pow(i,2));
        i=(i*u_r)/(pow(i,2));
        return *this;} 

      // + of complex/complex
      Complex& operator +(Complex c){
        Complex sol=*this;
        return sol+=c;}

      // + of complex/double 
      Complex& operator +(double u_r){
        Complex sol=*this;
        return sol+=u_r;}

      // - of complex/complex
      Complex& operator -(Complex c){
        Complex sol=*this;
        return sol-=c;}

      // - of complex/double
      Complex& operator -(double u_r){
        Complex sol=*this;
        return sol-=u_r;}

      // * of complex/complex 
      Complex& operator *(Complex c){
        Complex sol=*this;
        return sol*=c;}

      // * of complex/double
      Complex& operator *(double u_r){
        Complex sol=*this;
        return sol*=u_r;}

      // / of complex/complex
      Complex& operator /(Complex c){
        Complex sol=*this;
        return sol/=c;}
      
      // / of complex/double 
      Complex& operator /(double u_r){
        Complex sol=*this;
        return sol/=u_r;}

      //<< operator
      friend ostream& operator << (ostream &out,Complex &c);
      
      // == operator
      bool operator ==(Complex c){
        if (r==c.getR() && i==c.getI()){return true;}
        else{return false;}}
        
      // != oprrator
      bool operator !=(Complex c){
        return !(*this==c);}
    };
// << operator
ostream& operator << (ostream &out,Complex &c){
    out << c.r;
    if (c.i>=0){out<<"+";}
    out<<c.i<<"i"<<endl;
    return out;}