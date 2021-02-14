/*
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

using namespace std;

const int ms=50; // max dimensions of arrays and matrices

// function prototypes:
void read_int_vector(int a[], int n);
void random_int_vector(int v[], int s,int m, int M);
void print_int_vector(int a[], int n);
void print_double_vector (double v[],int n);
void random_real_vector (double v[],int n, double m, double M);
void sum_real_vector (const double a1 [], const double a2[], double r[], int n);
void diff_real_vector (const double a1 [], const double a2[], double r[], int n);
void prod_real_vector (const double a1 [], const double a2[], double r[], int n);
void div_real_vector (const double a1 [], const double a2[], double r[], int n);
int search_min(int v[],int h, int l, int n);

int main()
{
  srand(time(0)); // initialisation of random number generation, see lecture notes
  int v1[ms], s;
  double v2[ms],v3[ms],r[ms];
  do{
    cout << "Vector dimension? ";
    cin >> s;
    if(s>ms)
        cout << "The maximal dimension is:  " << ms << "\n";
  }while(s>ms);

  read_int_vector(v1,s);

  cout << "The elements of the inputed array are: \n";
  print_int_vector(v1,s);
  cout<< "The minimum is: "<< v1[search_min(v1,0,s-1,s)]<<" at rank "<< search_min(v1,0,s-1,s)<<endl;
  
  random_int_vector(v1,s,2,4);

  cout << "The elements of the randomly generated array are: \n";
  print_int_vector(v1,s);

  random_real_vector(v2,s,0.0,10);
  print_double_vector(v2,s);
  random_real_vector(v3,s,0.0,10);
  print_double_vector(v3,s);

  prod_real_vector (v2,v3,r,s);
  cout << "The elements of the double randomly generated array are: \n";
  print_double_vector(r,s);
  return 0;
}

// Function definitions

// Function that reads in n integers and store them in the array a
void read_int_vector(int a[], int n){
  for(int i=0;i<n;i++){
    cout << i+1 << ". numero: ";
    cin >> a[i];
  }
}

// Function that create an array with s integers randomly generated in the interval [m,M]
void random_int_vector(int v[], int s,int m, int M){
  for(int i=0;i<s;i++){
    v[i]=m+rand()%(M-m+1);
  }
}

//Function that displays all the value in a one dimentional array
void print_int_vector(int a[], int n){
  cout << "{";
  for(int i=0;i<n;i++){
    cout << a[i];
    if (n-i!=1){cout<<", ";}
  }
  cout << "}" << endl;
}
//Function thar display the values of an array of double
void print_double_vector (double v2[],int n){
  cout << "{";
  for(int i=0;i<n;i++){
      cout << v2[i];
      if (n-i!=1){cout<<", ";}
  }
  cout << "}" << endl;
}
// Function that create an array with s double randomly generated in the interval [m,M]
void random_real_vector (double v2[],int n, double m, double M){
  for(int i=0;i<n;i++){
    v2[i]=(double)m+double(rand())/(double(RAND_MAX)/(M-m));
  }
}
// Function that sums two arrays with double number and size n 
void sum_real_vector (const double a1 [], const double a2[], double r[], int n){
  for(int i=0;i<n;i++){
    r[i]=a1[i]+a2[i];
  }
}
// Function that compute the difference of two arrays with double number and size n 
void diff_real_vector (const double a1 [], const double a2[], double r[], int n){
  for(int i=0;i<n;i++){
    r[i]=a1[i]-a2[i];
  }
}
// Function that compute the product of two arrays with double number and size n 
void prod_real_vector (const double a1 [], const double a2[], double r[], int n){
  for(int i=0;i<n;i++){
    r[i]=a1[i]*a2[i];
  }
}
// Function that compute the division of two arrays with double number and size n 
void div_real_vector (const double a1 [], const double a2[], double r[], int n){
  for(int i=0;i<n;i++){
    r[i]=a1[i]/a2[i];
  }
}
int search_min(int v[],int h, int l, int n){
  if (h>n or l>n or h<0 or l<0){
    cout << "Out of Boundaries" << "\n";
    return 0;
  }
  else{
    int min=l;
    for(int i=l;i<=h;i++){
      if (MIN(v[i], v[i+1])< v[min]){
        if(v[i]<v[i+1]){
          min=i;
        }
        else{
          min=i+1;
        }
      }
      //cout<<"Minimum is"<<v[min] <<endl;
    }
    return min;
  }
}
*/