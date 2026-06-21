#include <iostream>
#include <cstdlib>
#include <ctime>
#include "homework4_functions.cpp"
using namespace std;

int main(){
    srand (time(0));
    const int SIZE = 5;
    int winning[SIZE];
    int user[SIZE];
    winningDigits(winning, SIZE);
    while(checkDuplicated(winning, SIZE)){
        winningDigits(winning, SIZE);
    }
    do{
        userTicket(user, SIZE);
        if(checkDuplicated(user, SIZE)){
            cout<<"Duplicate numbers found. Enter ticket again.\n";
        }
    }while(checkDuplicated(user, SIZE));
    int matches = checkWinner(winning, user, SIZE);
    printResult(winning, user, matches, SIZE);


    return 0;
}
