#include <iostream>
using namespace std;
int main() {
    int intNumber = 14;
    float floatNumber = 3.14;
    double doubleNumber = 45.1234;
    bool boolean=true;
    char charName='A';
    cout<<"Value of Integer is "<<intNumber<<". Size is: "<<sizeof(intNumber)<<endl;
    cout<<"Value of Integer is "<<floatNumber<<". Size is: "<<sizeof(floatNumber)<<endl;
    cout<<"Value of Integer is "<<doubleNumber<<". Size is: "<<sizeof(doubleNumber)<<endl;
    cout<<"Value of Integer is "<<boolean<<". Size is: "<<sizeof(boolean)<<endl;
    cout<<"Value of Integer is "<<charName<<". Size is: "<<sizeof(charName)<<endl;
    return 0;
}