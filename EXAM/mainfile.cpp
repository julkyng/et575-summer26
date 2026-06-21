#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.cpp"
using namespace std;
int main(){

    cout<<"\n----- Example 1: Intro to pointer -----\n";
    intropointer();
    cout<<"\n------ Example 2: Checking different data ------\n";
    string something = "Hello World!";
    a(something);
    cout<<something<<endl;
    b(something);
    cout<<something<<endl;
    c(&something);
    a(something);
    cout<<"\n------ Example 3: intro         ------\n";
    introarray();

    cout<<"\n------ Example 4 ------\n ";
    const int s = 4;
    int age[s] = {18,21};
    printelements(s, age);
    updatearray(s, age);
    printelements(s, age);

    int c = countadults(s, age);
    cout<<"Adult 21+ = "<<c<<endl;
    

    cout<<"\n----- EXERCISE A -----\n";
    int* ptr; //This code will declare a pointer variable which could store the address of the integer.
    int var = 7; //This code will declare an integer named "var" and assign to the value of 7.
    int foo = 21; // This code will declare an integer named "foo" and assign it to the value of 21.
    ptr = &var; // This code will assign the memory of "var" to the pointer of "ptr", now ptr points to var.
    ptr = &foo; // This code does the same thing but instead of assigning it, it'll reassign it instead. So instead of ptr pointed to var, it'll point to foo now.
    int& ref = var; // This code will declare "ref" as a reference to "var", this gives us a a new way to call the location of var. Unlike the pointer though, ref cant be moved, meaning 
    //In other words the ptr has the freedom to move around and point to many different variable, whereas ref doesnt have that freedom and can only be assigned one time and will be stuck with the assigned locationa and memory.
    cout<<"\n-------- EXERCISE B --------\n";
    srand(time(0));
    const int size = 10;
    int numbers[size];
    fillArray(numbers, size);
    cout<<"Array elemnts: "<<endl;
    for(int i = 0; i<size; i++){
        cout<<numbers[i]<<"\t";
    }
    cout<<endl;
    int evenCount;
    evenCount = countEvennumbers(numbers, size);
    cout<<"Number of even numbers: "<<evenCount<<endl;

    return 0;
}