#include <iostream>
using namespace std;

int main() { 
    int score = 0; 
    int level = 0; 

    cout << "Please Input the score:"; 
    cin >> score; 
    level = score/10; 

    switch(level) { 
        case 10: 
        case 9: 
            cout << "Level is A" << endl; 
            break; 
        case 8: 
            cout << "Level is B" << endl; 
            break; 
        case 7: 
            cout << "Level is C" << endl; 
            break; 
        case 6: 
            cout << "Level is D" << endl; 
            break; 
        default: 
            cout << "Level is E (NG)" << endl; 
    } 
 
    return 0;
}