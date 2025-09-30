
#ifndef TEST_DOCTOR_H
#define TEST_DOCTOR_H
#include<string>
#include "user.h"
using namespace std;
class doctor:public user {
      string specialization;
    public:

    doctor(int docId,string n,string spc);

void setdataofDoctor(string spc);
    void getdataOfDoc();
};
#endif //TEST_DOCTOR_H