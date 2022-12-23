#include<iostream>
using namespace std;
class Calculator{

private:

    double n1,n2;

    void setvalue(){

        cout<< "Enter two numbers :"<< endl;
        cin>>n1>>n2;

    }

    void calculate_sum(){
     setvalue();
     cout<<"summation is :"<<n1+n2<<endl;

    }
    void calculate_sub(){
     setvalue();
     cout<<"Abstraction is :"<<n1-n2<<endl;

    }
    void calculate_multiply(){
     setvalue();
     cout<<"multiplication is :"<<n1*n2<<endl;

    }
    void calculate_division(){
     setvalue();
     cout<<"division is :"<<n1/n2<<endl;

    }

public :

    void menu(){
     cout<<"******************"<<endl;
     cout<<" choice 1 means addition"<<endl;
     cout<<" choice 2 means substraction"<<endl;
     cout<<" choice 3 means multiplication"<<endl;
     cout<<" choice 4 means division"<<endl;
     cout<<"******************"<<endl;

    }
    void getsum(){
    calculate_sum();
    }

    void getsub(){
    calculate_sub();
    }
     void getmultiply(){
    calculate_multiply();
    }
    void  division(){
    calculate_division();
    }


};
int main(){


Calculator a1;
    a1.menu();
    while(1){
int choice;
    cout<<"Enter your choice = "<<endl;
    cin>> choice;

switch(choice){
    case 1:
        a1.getsum();
        break;
    case 2:
        a1.getsub();
        break;
    case 3:
       a1.getmultiply();
        break;
    case 4:
       a1.division();
        break;
   default :
       cout<<"You entered wrong number "<<endl;
}

    }
    return 0;
}
