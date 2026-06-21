/*
Julian Castaneda
June 16, 2026
lab 16, intro array
*/

#include <iostream>
#include <cstdlib>
using namespace std;
void intropointer(){
    int num = 12;
    char sym = '#';
    string n = "Peter";

    //Declare pointer without initial value
    int* ptrint;
    char* ptrchar;
    string* ptrstring;
    //check a pointer info
    cout<<ptrint<<endl;
    //initialize a pointer with a location of a variable
    ptrint = &num;
    ptrchar = &sym;
    ptrstring = &n;
    //check pointers info
    cout<<ptrint<<endl;
    cout<<ptrchar<<endl;
    cout<<ptrstring<<endl;
    //Get the value of a pointed variable.
    cout<<*ptrint<<endl;
    cout<<*ptrchar<<endl;
    cout<<*ptrstring<<endl;


}
//EXAMPLE 2
void a(string v){
    cout<<"A ="<<v<<endl;
    v = "updated A";
}
void b(string& v){
    cout<<"B = "<<v<<endl;
    v = "updated B";
}
void c(string* v){
    cout<<"C = "<<v<<endl;
}
//EXAMPLE 3
void introarray(){
    //declare an array with size 3
    int scores[3];
    //use squared brackets to access to each element in the array
    //each element is organized by the index number starting from.
    cout<<scores<<endl;
    cout<<"first element = "<<scores[0]<<endl;
    //assign values to each element in an array
    scores[0] = 50;
    scores[1] = 80;
    scores[2] = 88;
        cout<<"first element = "<<scores[0]<<endl;
    // initializing an array
    char symbol[5] = {'$', '#', '@', '!', 'G'};
    cout<<"3rd symbol = "<<symbol[2]<<endl;

    //The size of an array
    string names [] ={"Peter", "annie"};
    cout<<"2nd name "<<names[1]<<endl;
    for(int i = 0; i<5 ; i++){
    cout<<symbol[i]<<endl;
}
//use loop to find the average of scores array
float avgscore = 0, sumscores = 0;
for(int i = 0; i<3 ; i++){
    sumscores += scores[i];
}
avgscore = sumscores/3.0;
cout<<"The average score is = "<<avgscore<<endl;
}
//EXAMPLE 4: passing an array into a function
//an array can be declared as parameter [] bracket --> int arrayname[]
void printelements(int sizearray, int arr[]){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void updatearray(int sizearray, int *arr){
    for(int i = 0; i<sizearray; i++){
        cout<<"Enter an age: ";
        cin>>arr[i];
    }
}
int countadults(int sizearray, int *arr){
    int counter = 0;
    for(int i = 0; i<sizearray; i++){
        if(arr[i] >= 21)
            counter ++;
    }
    return counter;
}
//EXERCISE B
void fillArray(int arr[], int size){
    for (int i = 0; i<size; i++){
        arr[i] = rand()%9 +1;
    }
}
int countEvennumbers(int arr[], int size){
    int counter = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]%2 == 0){
            counter ++;
        }
    }
    return counter;
}