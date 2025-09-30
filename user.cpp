
#include "user.h"

#include <iostream>
#include <ostream>
using namespace std;
user::user(string n, int reg, int TOU) {
    name = n;
    reg_num = reg;
    typeOfUser = TOU;
}
void user::setdata(string n, int reg, int TOU) {
    cout<<"enter user's data"<<endl;
    cout<<"enter reg: "<<reg_num<<endl;
    cin>>reg;
    reg_num = reg;
    cout<<"enter user type: "<<endl;
    cin>>TOU;
    typeOfUser = TOU;
    cout<<"enter user name: "<<endl;
    cin>>n;
    name=n;
}
void user::getdata() {
    cout<<" user's data"<<endl;
    cout<<" reg: "<<reg_num<<endl;
    cout<<" user type: "<<typeOfUser<<endl;
    cout<<" user name: "<<name<<endl;
}
