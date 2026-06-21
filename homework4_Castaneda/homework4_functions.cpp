#include <iostream>
using namespace std;
void winningDigits(int arr[], int size){
    for(int i = 0; i<size; i++){
        arr[i] = rand()%19 + 1;
    }
}
void userTicket(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<"Enter a number: "<<i + 1<<" (1 - 19): ";
        cin>>arr[i];
    }
}
bool checkDuplicated(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }
    return false;
}
int checkWinner(int winning[],int user[], int size){
    int count = 0;
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            if (winning[i] == user[j]){
                count++;

            }
        }
    }
    return count;
}
void printResult(int winning[], int user[], int matches, int size){
    cout<<"\nWinning digits = ";
    for(int i = 0; i<size; i++){
        cout<<winning[i]<< " ";
    }
    cout<<"\nUser ticket = ";
    for(int i = 0; i<size; i++){
        cout<<user[i]<<" ";
    }
    cout<<"\nMatching numbers = "<<matches<<endl;
}