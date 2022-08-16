#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class A{
    public:
    int a;
    void print(){
        cout << "a = " << a << endl;
        }
};
class B:public A{
    public:
    int b;
    void printB(){
        cout << "b = " << b << endl;
        }
};
class C:public B{
    public:
    int c;
    void printC(){
        cout << "c = " << c << endl;
        }
};
int main(){
    // B b;
    // b.b = 44;
    // b.a = 40;
    // b.printB();
    // b.print();
    // C c;
    // c.c = 48;
    // c.a = 60;
    // c.b = 46;
    // c.printC();
    // c.print();
    // c.printB();

/*
    rand() generates random number but if I run the program
    again and again it is going to give the same number. A
    value called seed needs to be set in function srand(seed)
    to get a different random number. But if we keep the same
    value of seed then then the program again going to give
    same number every time. So we need to change the seed value
    every time we run the program. The default value of seed is
    1. To change the seed value we can use the time function
    which changes every second;

    GETTING RANDOM NJMBER WITHIN A SPECIFIED RANGE
    To achieve this we take the remainder of the random number
    divided by the range limit and offset the value as we need
*/

    srand(time(0));
    for(int i=0; i<10; i++){
        cout<<11+(rand()%9)<<endl; //Random value between 11-19
    }

    return 0;
}
