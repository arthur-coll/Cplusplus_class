/*
// EXercice 2
#include <iostream>
using namespace std;
// function main begins program execution
int main(){
int i,j;
cin >> i;
cin >> j;
cout << i*j<< endl; // prints on 
return 0; // indicates that program ended successfully
}

//Exercice 3
#include <iostream>
using namespace std;
// function main begins program execution
int main(){
  int i,j,k;
  cin >> i;
  cin >> j;
  if(i<j){
    k=i;
    j=i;
    i=k;
  }
  if (i%j ==0){
    cout <<"They are multiple" << endl; 
   }
  else{
    cout <<"They are not multiple" << endl; 
  }
  return 0; // indicates that program ended successfully
}

//Exercice 4
#include <iostream>
using namespace std;
// function main begins program execution
int main(){
  int i;
  cin >> i;

  while (i >0){
    cout <<"*"; 
    i-=1;
   }
  return 0; // indicates that program ended successfully
}

//Exercice5
#include <iostream>
using namespace std;
// function main begins program execution
int main(){
  int i,j=1,k=1;
  cin >> i;

  while (j <=i){
    k*=j;
    j+=1;
   }
  cout <<k;
  return 0; // indicates that program ended successfully
}

//Exercice 6

//Version 1:
#include <iostream>
using namespace std;
// function main begins program execution
int main(){
for (int i = 0; i < 5; i++) {
      cout <<"*****"<< endl; 
   }
  return 0; // indicates that program ended successfully
}

//Version 2 :
#include <iostream>
using namespace std;
// function main begins program execution
int main(){
  int i=0,j;
  while(i<5){
    j=0;
    while(j<=i){
      if(j==i){
      cout <<"*"<< endl;
      }
      else{
        cout <<"*";
      }
    j+=1;
    }
    i+=1;  
   }
  return 0; // indicates that program ended successfully
}

//Version 3 :
#include <iostream>
using namespace std;
// function main begins program execution
int main(){
  int i=0,j;
  while(i<5){
    j=4;
    while(j>=i){
      if(j==i){
      cout <<"*"<< endl;
      }
      else{
        cout <<"*";
      }
    j-=1;
    }
    i+=1;  
   }
  return 0; // indicates that program ended successfully
}

//Exercice7
#include <iostream>
using namespace std;
// function main begins program execution
int main(){
  double i=0,min,max,input;
  cin >> input;
  max=input;
  min=input;
  while(i<9){
    cin >> input;
    if(max<input){
      max=input;
      }
    if(min>input){
        min=input;
      }
    i+=1; 
  }
  cout <<"The maximum is "<< max << endl;
  cout <<"The minimum is "<< min << endl;   
  return 0; // indicates that program ended successfully
}

//Exercice 8

//Version 1
#include <iostream>
#include <math.h> 
using namespace std;
// function main begins program execution
int main(){
  double input,i=0,total=0;
  cin >> input;
  while(i<input){
    total+=pow(-1,i)*4/(2*i+1);
    i+=1; 
  }
  cout <<"The approximation of pi when n="<< input << " is " << total << endl;
 
  return 0; // indicates that program ended successfully
}

//Version 2
#include <iostream>
#include <math.h> 
using namespace std;
// function main begins program execution
int main(){
  double input,i=0,total=0,previoustotal;
  cin >> input;
  while(true){
    previoustotal=total;
    total+=pow(-1,i)*4/(2*i+1);
    //cout << total << endl;
    i+=1; 
    if (abs(total- previoustotal)<=input){
      break;
    }
  }
  cout <<"The approximation of pi when lambda="<< input << " is " << total << endl;
 
  return 0; // indicates that program ended successfully
}
*/