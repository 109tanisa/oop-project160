#include "user.h"
#include"doctor.h"
#include <iostream>
#include <string>
using namespace std;
doctor::doctor(int docId,string n,string spc):user(n,docId,2),specialization(spc){}
void doctor::setdataofDoctor(string spc) {
   
    specialization=spc;
}

void doctor::getdataOfDoc() {
    getdata();
    cout<<"specialization: "<<specialization<<endl;
}