#include "header.h"



int main(){
    int n ;
    char even[] = "Even";
    char odd [] = "Odd";
    cout << "Type a number: ";
    cin >> n;
    if (n % 2 == 0){
        cout << "Number " << n << " is: " << even << endl;
    }
    else {
        cout << "Number " << n << " is: " << odd << endl;
    }
   
    return 0;
}