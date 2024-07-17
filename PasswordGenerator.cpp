#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    int length;
    const char characters[]="!@#$%&*_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int characterslength=sizeof(characters)-1;
    srand(time(0));
    cout<<"Enter the desired length for the password: ";
    cin>>length;
    cout<<"Generated Password: ";
    for (int i=0;i<length; ++i) {
        cout<<characters[rand()%characterslength];
    }
    cout<<endl;
    return 0;
}