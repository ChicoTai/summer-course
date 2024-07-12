#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x,a,b,c,d,e,f;
    double g;
    cout << "Please input a positive integer: ";
    cin >> a;
    x = a%5;
    if (a<=0) {
        cout<<a<< " is not a positive integer!!"<<endl;
    } else if (a<=9 && a>=1) {
        cout<<a<< " is a small integer."<<endl;
    } else if (a>=10 && a<=99) {
        b = a/10;
        c = a%10;
        cout<<"The tens digit of "<<a<<" is "<<b<<"\n";
        cout<<"The units digit of "<<a<<" is "<<c<<endl;
    } else if (a>=100 && x==0) {
        cout<<a<<" is a large integer.\n";
        cout<<a<<" is divisible by 5."<<endl;
    } else if (a>=100 && x==1) {
        d = a+5; 
        cout<<a<<" is a large integer.\n";
        cout<<a<<"+5= "<<d<<endl;
    } else if (a>=100 && x==2) {
        e = a-5;
        cout<<a<<" is a large integer.\n";
        cout<<a<<"-5= "<<e<<endl;
    } else if (a>=100 && x==3) {
        f=a*5;
        cout<<a<<" is a large integer.\n";
        cout<<a<<"*5= "<<f<<endl;
    } else if (a>=100 && x==4) {
        g=a/5;
        cout<<a<<" is a large integer.\n";
        cout<<a<<"/5= "<<setprecision(2)<<fixed<<g<<endl;
    }
    return 0;
}