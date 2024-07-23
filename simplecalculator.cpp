#include<iostream>
using namespace std;
class calculator
{
    
    public:
        double addition(double num1,double num2)
        {
            return (num1+num2);
        }
        double substraction(double num1,double num2)
        {
            return (num1-num2);
        }
        double multiplication(double num1,double num2)
        {
            return (num1*num2);
        }
        double division(double num1,double num2)
        {
            if(num2!=0)
            {
                return (num1/num2);
            }
            else
            {
                cout<<"error!division by zero"<<endl;
                return 0;
            }
        }

};


int main()
{
    calculator t;
    int operation;
    char ans;
    double num1,num2;
    cout<<"enter the two number:";
    cin>>num1>>num2;
    do{
        cout<<"***calculator***"<<endl;
        cout<<"1.ADDITION"<<endl;
        cout<<"2.SUBSTRACTION"<<endl;
        cout<<"3.MULTIPLICATION"<<endl;
        cout<<"4.DIVISION"<<endl;
        cout<<"Enter your operation:";
        cin>>operation;
        switch(operation)
        {
            case 1:cout<<"ADDITION:"<<t.addition(num1,num2)<<endl;
            break;
            case 2:cout<<"SUBSTRACTION:"<<t.substraction(num1,num2)<<endl;
            break;
            case 3:cout<<"MULTIPLICATION:"<<t.multiplication(num1,num2)<<endl;
            break;
            case 4:cout<<"DIVISION:"<<t.division(num1,num2)<<endl;
            break;
            default:
            cout<<"Invalid choice!!";
        }
        cout<<"do you want to continue(y/n):";
        cin>>ans;
    }while(ans=='y');
    return 0;
}

















