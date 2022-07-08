/*-----------------------------------------------------------------

 1. Problem Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true 
 
 -----------------------------------------------------------------*/

 #include <iostream>
using namespace std;

int main () {
    string arr[10] = {"one","two","three","four","five","six","seven","eight","nine"};
    int x,y;
    
    cin >> x;
    cin >> y;
    for( int i = x; i < 10 ; i++){
        cout << arr[i-1] << endl;
        if (i == y) break;
    };
    for( int i = x; i < 10 ; i++){
        if ( i % 2 == 0){cout << "even"<<endl;}
        else {cout << "odd"<<endl;}

    };
    return 0;
}