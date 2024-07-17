#include <iostream>
using namespace std;
int main(){
    int choice;
    double temp, convertedTemp;
    while (true){
        cout<<"Temperature Conversion Program"<<endl;
        cout<<"1. Convert from Celsius to Fahrenheit"<<endl;
        cout<<"2. Convert from Fahrenheit to Celsius"<<endl;
        cout<<"3. Exit" << endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice == 1) {
            cout<<"Enter temperature in Celsius: ";
            cin>>temp;
            convertedTemp = (temp*9.0/5.0)+32;
            cout<<temp<<" Celsius is "<< convertedTemp<<" Fahrenheit."<<endl;
        } else if (choice == 2) {
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>temp;
            convertedTemp = (temp - 32)*5.0/9.0;
            cout<<temp<<" Fahrenheit is "<<convertedTemp <<" Celsius."<<endl;
        } else if (choice == 3) {
            cout<<"Exiting program."<<endl;
            break;
        } else {
            cout<<"Invalid choice."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
