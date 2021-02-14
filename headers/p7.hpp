#include <iostream>
#include <vector>
using namespace std;

//Assignment 7
//Question  1
class Date{ 
  private:
    int day;
    int month;
    int year;
  public:
    Date(int user_day, int user_month, int user_year): day{user_day}, month{user_month},year{user_year}{}
    //Copy Constructor
    Date(const Date &d2): day{d2.day}, month{d2.month},year{d2.year}{}

    int get_day(){return day;}
    int get_month(){return month;}
    int get_year(){return year;}

    string display(){return to_string(day)+"/" + to_string(month) + "/"+ to_string(year);}
};

class Blood{
  private:
    int systolic;
    int diastolic;
    Date date;

    public:
    Blood(int user_systolic, int user_diastolic, Date user_date): systolic{user_systolic}, diastolic{user_diastolic},date{user_date}{}
    int get_systolic(){return systolic;}
    int get_diastolic(){return diastolic;}
    Date get_date(){return date;}
};

class Patient{ 
  private:
    string name;
    std::vector<Blood> vect;
  public:
      //Constructor
      Patient(string user_name): name{user_name} {}
      //Add records function
      void addRecord(Blood x){
        vect.push_back(x);
      }
      //Print report function
      void printReport(){
        std::vector<int> pressure;
        int max=0; int rank=0; int sum=0;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~  "<< name<<" Report  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        for (int i=0;i<vect.size();i++){

          if (vect[i].get_systolic()>140){

            if (max<vect[i].get_systolic()){
              max=vect[i].get_systolic();
              rank=i;}
              pressure.push_back(vect[i].get_systolic());
            }

          if (vect[i].get_diastolic()>140){
            pressure.push_back(vect[i].get_diastolic());}
          sum+=vect[i].get_systolic()+vect[i].get_diastolic();
        }

        if (max<140){
            cout<< "No measurement was too high.";
        }

        else{
          cout<<"Highest abnormal blood pressure was the "<< vect[rank].get_date().display()<< " with systolic pressure ="<<max<<" and diastolic pressure="<< vect[rank].get_diastolic()<< endl;

          cout<<"Anormal Blood pressure records exceeding the limit:";
          for (auto i: pressure)
            cout << i << ',';
        }
        cout<< "\nAverage pressure="<< sum / (vect.size()*2)<<endl;
      }
      
}; 
// Question 2:
template <typename T>
  class StackI { 
    public :
    virtual void push(T t) = 0; 
    virtual void pop() = 0;
    virtual T p_top() =0;
    //virtual bool isEmpty() =0; 
    virtual void print()=0;
  };

template <typename T>
  class Stack: StackI<T>{
    protected: 
      int top; // position of the top element
      int nb; //nb of elements currently in the Stack
      int size;
      T stack[];
    public:
      Stack(){size=20; top=0; nb=0; T stack[20];}
      Stack(int u_n){size=u_n; top=0; nb=0; T stack[u_n];}

      void push(T t){
        if(nb<size){
          stack[top+1]=t;
          top+=1;
          nb+=1;
          }
        else{
          cout<< "ERROR: Full Stack Exception\n";
        }
        
      }

      void pop(){
        if(nb>0){
          top-=1;
          nb-=1;
        }
        else{
          cout<<"ERROR : Empty Stack Exception\n";
        }
      }

      T p_top(){
        if (nb>0){return stack[top];}
        else{return stack[0];}
      }

      void print(){
        if (nb==0){cout << "The stack is EMPTY " << endl;}
        else{
          cout<<"TOP of the Stack\n";
          for (int i=top;i>0;i--){
            cout<<stack[i]<<endl;
          }
          cout<<"BOTTOM of the Stack\n";
        }
      }
  };
