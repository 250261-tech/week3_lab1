#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int a=189;
    char b='B';
    float n=float(a)/3;

    cout<<n<<" "<<int(b)<<" "<<float((a+int(b))/5)<<" "<<char(int(b)+(a/10-1))<<endl;
    return 0;
}