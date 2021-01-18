//Exercice 1
/*
#include <iostream>
#include<cmath>
using namespace std;

void inthecircle(double,double,double,double,double);
int main() {
  double radius=4.0,x_center=0,y_center=0,x_point,y_point;
  cin>> x_point;
  cin>> y_point;
  inthecircle(radius,x_center,y_center,x_point,y_point);
}

void inthecircle(double radius,double x_center,double y_center,double x_point,double y_point){
  double length=(pow(pow(x_point -x_center,2)+ pow(y_point -y_center,2),0.5));
  if(length<=radius) {
    cout << "The point is inside the circle";
  }
  else{
    cout << "The point is outside the circle";
  }
}

//Exercice 2
#include <iostream>
#include<cmath>
using namespace std;

int main() {
  double position, speed, acceleration,refresh,position_t, time,k;
  cout << "enter the initial position, the speed and the acceleration: ";
  cin >> position >> speed >> acceleration;
  cout << "how many times you want to display the position of the moving body? ";
  cin >> time;
  cout << "how often (in seconds) you want to update the position of the moving object? ";
  cin >> refresh;
  cout << "-----------------------" << endl << endl;
  cout << "Acceleration: " << acceleration <<" Initial speed: " << speed <<" Initial position: " << position << " Number of times: " << time <<" Delta t: "<<refresh<<endl;

  for(k=0;k<time*refresh;k=k+refresh){
    position_t=position+speed*k+0.5*acceleration*pow(k,2);
    cout << "At time " << k << " the position is "<< position_t<<endl;
  }
}

//Exercice 3
#include <iostream>
#include<cmath>

using namespace std;

int main() {
double h=8,p=4;
swap(h,p);
cout << h << endl << p << endl;
}

void swap(double &x,double &y){
  double z;
  z=x;
  x=y;
  y=z;
}


//Exercice 4
#include <iostream>
#include<cmath>

using namespace std;

int main() {
int n,k,c=1,u=1;
cin >> n;
for(k=1;k<=n+1;k=k+1){
  while(c<k){
    cout<< u;
    u++;
    c++;
  }
  cout<<endl;
  c=1;
}
}

//Exercice 5:
#include <iostream>
#include<cmath>

using namespace std;

int main() {
  int last=1,b4_last=0,k,n,transit;
  cin >> n;
  for(k=0;k<n-1;k=k+1){
    transit=b4_last;
    b4_last=last;
    last=last+transit;
  }
cout<<endl<<"The "<<n<<" number of the Fibonnaci sequence is "<<last;
}
*/
//Exercice 6:
#include <iostream>
#include<cmath>

using namespace std;
int fib(int);
int k=0;

int main() {
cout<< fib(10)<<endl;
cout << "Number of recursive call: "<< k;
}

int fib(int n){
  k++;
  if (n<=1){return n;}
  else {
    return fib(n-1)+fib(n-2);
  }
}

//Exercice 7: