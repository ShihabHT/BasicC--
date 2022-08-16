#include <iostream>

using namespace std;

// function that returns nothing
void respond(){
    cout<<"hi there"<< endl;
}

/* we can't declare a function after the main function
    cause in that case the program would not know about
    the function as the program is executed line by line

    If we want to put a function down the main function
    then we must declare the function before the main
    function (just like we can declare a variable without
    assigning a value and later assigning the value when
    needed) like the following
*/
void printName(string name);

//type name(argument), function that returns a specific type of value
double square(double x){
    return x*x;
}

int main()
{
    cout << "Hello world!" << endl;
    respond();
    printName("Shihab");

    double sq = square(1.4);
    cout<< sq<<endl;
    return 0;
}

void printName(string name){
    cout<<"hi "<<name<<endl;
}
