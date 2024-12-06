#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int age,height,bounty;
    string character;

    cout << "Enter your age: ";
    cin >> age;

    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;

        if(height < 100) character = "Chopper";
        else if(height < 180) character = "Usopp";
            else{
                cout << "Enter your bounty: ";
                cin >> bounty;

                if(bounty > 1.1*pow(10,9)) character = "Zoro";
                else character = "Sanji";
            }
    }else{
        if(age <= 60){
            cout << "Enter your bounty: ";
            cin >> bounty;

            if(bounty > 500*pow(10,6)) character = "Jinbe";
            else character = "Franky";

        }else character = "Brook";
    }
    
    cout << "Your character = " << character ;

    
}

