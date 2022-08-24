#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main(){
    cout<<"Running the program..."<<endl;
    // system("cls"); //This command clears the console
    string name = "Shihab";

    cout << "Hello world! "; //without new line
    cout << " My name is " << name << endl;

    // Data types
    char grade = 's';
    string nam = "Shihab";
    int ab = 22;
    double cgpa = 4.5;
    bool isMarried = true;

    cout << grade << endl;

    // Working with string
    string phrase = "What the hell";
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    phrase[0] = 'O'; //Replacing latter
    cout << phrase << endl;
    cout << phrase.find("the", 0) << endl;
    cout << phrase.substr(5, 3) << endl;

    // Working with numbers
    int a = 10;
    int b = 3;
    cout << (a+b-a*b/b)% 2 << endl;
    a+=5;
    cout << a << endl;
    double d = 4.5;
    cout << b + d << endl;
    cout << 10/3 << endl; //Note : operation between two integer gives integer
    cout << 10/3.0 << endl; //At least one of the has to be decimal number
    cout << pow(10, 3) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.6) << endl;
    cout << ceil(4.6) << endl;
    cout << floor(4.6) << endl;
    cout << fmax(4, 43) << " " << fmin(5,74) << endl;

    // Getting user input
    cout << "User Input Stuff" << endl;
    int age;
    cout << "Enter your age : ";
    age = 22; //cin >> age;
    cout << "you are " << age << " years old" << endl;
    // getting character input(takes only one input and immediately executes next line)
    char ch;
    // ch = getche(); //echos the character
    ch = 'a';// ch = getch(); //doesn't echo the character

    string sen;
    cout << "Enter a sentence : ";
    sen = "no way"; //getline(cin, sen); //This method of string input takes the full line
    cout << sen << endl;
    cout << "Enter a sentence : ";
    sen = "what the"; //cin >> sen; //This method of string input takes only first word
    cout << sen << endl;

// Arrays
/*
Accessing array out of bound doesn't give any error. This is due to the fact that C++ does
not do bounds checking. Languages like Java and python have bounds checking so if you try
to access an out of bounds element, they throw an error. C++ design principle was that it
shouldn't be slower than the equivalent C code, and C doesn't do array bounds checking. So
you have to do it manually if it requires
*/
    int nums[20] = {4, 8, 32, 35, 5}; //this array can hold a max of 20 elements
    int num2[] = {1, 2, 3}; //this array can hold max 3 elements
    nums[0] = 8;
    cout << nums[0] << endl;
    cout << "Array out of bound, this number does not exist inside the array : " << nums[8] << endl; //Array out of bound test

    //If statements
    bool x = true;
    if(x){
        cout<<"It's true"<<endl;
    }else if(!x){
        cout<<"It's false"<<endl;
    }else{
        cout<<"Not sure man"<<endl;
    }

    //Switch statement
    int dayNum = 3;
    switch(dayNum){
    case 1:
        cout<<"Friday"<<endl;
        break;
    case 2:
        cout<<"Saturday"<<endl;
        break;
    case 3:
        cout<<"Sunday"<<endl;
        break;
    default:
        cout<<"Invalid Number"<<endl;
    }

    //While loop
    int i = 1;
    while(i<=5){
        cout<<i<<endl;
        i++;
    }
    /*Do-While loop
      do while loop does exactly the same thing as a while loop
      but when it enters inside the loop it executes the code first
      then checks the condition. carefully check out the code below
    */
    i = 6;
    do{
        cout<<endl<<"Inside do while loop > "<<i<<endl;
        i++;
    }while(i<=5);

    /*sizeof() function gives the amount of space taken by a
      character, double or an integer or any data type in byte
      see the code below or search buckys tutorial on YouTube
      We can use this function to calculate the length of an array
    */
    int k;
    char c;
    cout<<"Amount of space an integer takes : "<<sizeof(k)<<endl;
    cout<<"Amount of space an integer takes : "<<sizeof(c)<<endl;

    //For loop
    int arr[] = {4,54,2,45,54,7,4,4,3,6,67};
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<arrLength; i++){
        cout<<arr[i]<<endl;
    }

    /*Pointers, are variables that store memory addresses of another
      variable of same data type. When we add '&' before a variable
      if it gives the memory address which we can also store in a
      pointer variable.
    */
    int day = 7;
    int *pDay = &day;
    double gpa = 2.3;
    double *pGpa = &gpa;
    string sent = "Shihab";
    string *pSent = &sent;
    cout<<pDay<<endl;
    /*to dereference a pointer we put '*' before the pointer
      variable which gives the value stored at that memory address
    */
    cout<<*pDay<<endl; //Dereferencing the pointer
    cout<<&*pDay<<endl; //address of dereferenced the pointer
    cout<<*&day<<endl; //making variable pointer then dereference
    cout<<&pDay<<endl; //gives address of the pointer variable

    int i1 = 10, j1 = 20, k1 = 30;
    cout<< i1++ + ++i1 + ++i1 - j1++ - ++j1 + ++k1 + k1++ <<endl; //Explain the output to yourself
    cout<< i1 << "-" << j1 << "-" << k1 <<endl;

    return 0;


}
