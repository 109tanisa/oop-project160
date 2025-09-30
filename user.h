
#ifndef TEST_USER_H
#define TEST_USER_H
#include <string>
using namespace std;

class user {
string name ;
    int reg_num ;
    int typeOfUser ;
    public :
    user(string n, int reg, int TOU)
    ;
void setdata(string n, int reg, int TOU);
    void getdata();

};


#endif //TEST_USER_H