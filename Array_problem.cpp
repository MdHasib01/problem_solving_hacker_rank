/*------------------------------------------------------------

Problem Link: https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

---------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n] = {};
    
    for(int i = 0; i < n; i ++){
        cin >> arr[i] ;
    }
    for(int i = n; i > 0; i --){
        cout << arr[i -1] << " " ;
    }
    return 0;
}