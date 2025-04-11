/****
This is a mini project I'm going, literally less than an
hour before back to back exams, just a basic calculator
just an easy implementation, but lowkey, I can use
polymorphism/abstract classes, I will once I finish this ,
ill make a more complicated one
***CALCULATOR ACTIONS***
-Add
-Subtract
-Divide
-Multiply
-Raise to the power

May God Help me
Author: Gabriela Jurado Fuentes
Date: 4/10/2025
****/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int mainMenu();
int Add();
int Sub();
int Div();
int Mult();
int Pow();

int mainMenu(){
    int userChoice;
    cout<<"=`*What do you want to do?*`="<<endl;
    cout<<"*enter a number*"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Divide"<<endl;
    cout<<"4. Multiply"<<endl;
    cout<<"5. Raise to a Power"<<endl;
    cout<<"6. quit"<<endl;
    cout<<"->";
    cin>>userChoice;
    return userChoice;
}

//goodness these functions can be made in an easier way
int Add(){
    double a;
    double b;

    cout<<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;
    double z= a+b;

    cout<<">> "<<z<<"\n"<<endl;
    return 0;
}


int Sub(){
    double a;
    double b;

    cout<<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;
    double x= a-b;

    cout<<">> "<<x<<"\n"<<endl;
    return x;
}


int Div(){
    double a;
    double b;

    cout<<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;
    double v= a/b;

    cout<<">> "<<v<<"\n"<<endl;
    return 0;

}

int Mult(){
    double a;
    double b;

    cout<<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;
    double g= a*b;

    cout<<">> "<<g<<"\n"<<endl;
    return 0;
}



//dang it made it to this point before my econ exam
int Pow(){
    double a;
    double b;

    cout<<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;
    double h= pow(a,b);

    cout<<">> "<<h<<"\n"<<endl;
    return 0;
}


int main(){
    cout<<"..::|Welcome to Gabi's Calculator!|::.."<<endl;
    int userChoice;

    do{
        userChoice=mainMenu();

        switch(userChoice){
            case 1:
                Add();
                break;
            case 2:
                Sub();
                break;
            case 3:
                Div();
                break;
            case 4:
                Mult();
                break;
            case 5:
                Pow();
                break;
            case 6:
                cout<<"Thank you for trying this out! :] Much Love!"<<endl;
                break;
            default:
                cout<<"Wrong choice please try again!"<<endl;
        }
    }while (userChoice !=6);

}
