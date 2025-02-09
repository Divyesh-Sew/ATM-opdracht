#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int Value= 15;
    int NotValue = -1;
    for (int i = 0; i < 5; i++)
    {        
        if (numbers[i] == 15)
        {
            cout << "De Index waarde van 15 is " << i ; 
            return 0;
        }
    }
    
    return 0;
}