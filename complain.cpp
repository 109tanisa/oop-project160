#include<string>
#include<iostream>
using namespace std;
#include"complain.h"
complain::complain() {
    complainCounter++;
}
complain::complain(int uId, string complains) {
    userId=uId;
    Dcomplain=complains;
    complainCounter++;
}
void complain::getComplain(string c) {
    cout<<"Submit your Complain"<<endl;
    cin>>c;
    Dcomplain=c;
}
void complain::printComplain() {
    cout<<"User ID: "<<userId<<endl;
    cout<<"Description of the Complain "<<endl;
    cout<<Dcomplain<<endl;
}
