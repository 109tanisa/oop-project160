#include<string>
using namespace std;
#ifndef TEST_COMPLAIN_H
#define TEST_COMPLAIN_H
class complain {
    int userId;
    string Dcomplain;
    public:
    static int complainCounter;
    complain();
    complain(int uId, string complains);
void getComplain(string c);
    void printComplain();
};
#endif //TEST_COMPLAIN_H