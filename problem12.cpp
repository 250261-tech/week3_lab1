#include <iostream>
using namespace std;
int main() {
    int a=241;
    int r=a%11;
    cout<<"In the first group: "<<int(a/11)<<endl;
    cout<<"In the second group: "<<int(r)<<endl;
    return 0;
}