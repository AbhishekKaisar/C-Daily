//
//  main.cpp
//  GuessTheNumber
//
//  Created by Abhishek Kaisar on 7/18/23.
//

#include <iostream>
using namespace std;
int main(){
    int ans, guess;
    cout<<"Enter a number: ";
    cin>> guess;
    ans=2;
    
    if(guess == ans){
        cout<<"Congratulations! Perfect guess"<<endl;
    }
    else{
        cout<<"Wrong Guess, Please try again!."<<endl;
    }
}
