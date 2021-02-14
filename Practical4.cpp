/*#include <iostream>
#include <math.h> 
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
using namespace std;

double * read_poly(int &n){
//Function that read the polynomial input by the user and store it in an array store in the heap
  do{
  cout << "rank of the polynamial: ";
  cin >> n;}while(n<0);
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

void print_poly(double *c, int n){
  //Function that display the polynomial with a rank n
  int i;
  if(c[0]!=0 and n>0)
    cout << c[0] << " + ";
  for(i=1;i<n;i++)
    if (c[i]!=0)
      cout << c[i] << "*x^" << i << " + ";
  if(n>0 and c[n]!=0)
    cout << c[n] << "*x^" << i;
  cout << endl<<endl;
}

double compute(double*c,int n,double x){
  //Function that compute the result of the polynomial for a given x.
  double sum=c[0];
  for(int i=1;i<=n;i++){
    sum+=c[i]*pow(x,i);
  }
  return sum;
}

double * poli_sum (double * p1, int d1, double * p2, int d2, int & dr){
  //Function that compute the sum of two polynomials p1,p2 with respective rank d1 and d2.
  if(d1==d2){
    for(int i=d1;i>0;i--){
      if(p1[i]+p2[i]!=0){
        dr=i;
        break;
      }
    }
  }
  else{dr=MAX(d1,d2);}

  double * c=new double[dr+1];
  for(int i=0;i<=dr;i++){
    double a,b;
    if (i>d1){a=0;}
    else{a=p1[i];}
    if (i>d2){b=0;}
    else{b=p2[i];}
    c[i]=a+b;
  }
  return c;
}
double * poli_prod (double * p1, int d1, double * p2, int d2, int & ds){
  //Function that compute the product of two polynomials p1,p2 with respective rank d1 and d2
   for(int i=MAX(d1,d2);i>0;i--){
      if(p1[i]*p2[i]!=0){
        ds=i;
        break;
      }
    }
  double * c=new double[ds+1];
  for(int i=0;i<=ds;i++){
    double a,b;
    if (i>d1){a=0;}
    else{a=p1[i];}
    if (i>d2){b=0;}
    else{b=p2[i];}
    c[i]=a*b;
  }
  return c;
}

int main()
//Main Function that call the function define above. 
{
  double *p1,*p2,*p3,*p4,x;
  int g1, g2,dr,ds;
  //Input the first polynomial
  p1=read_poly(g1);
  //Display it.
  print_poly(p1,g1);
  
  //Compute the value of the first polynomial for a given x value.
  cout << "Value of x to compute: ";
  cin >> x;
  cout << compute(p1,g1,x)<<endl;
  
  p2=read_poly(g2);
  //Input the second polynomial
  print_poly(p2,g2);
  //Display it.

  //Sum of the two polynomials.
  cout<<"Sum of the 2 polynomials: "<<endl;
  p3=poli_sum(p1,g1,p2,g2,dr);
  print_poly(p3,dr);

  //Product of the two polynomials.
  cout<<"Product of the two polynomials: "<<endl;
  p4=poli_prod(p1,g1,p2,g2,dr);
  print_poly(p4,ds);

  delete[] p1;
  delete []p2;
  delete []p3;
  delete []p4;
  return 0;
}
*/