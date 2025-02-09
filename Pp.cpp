#include <iostream>
using namespace std;

int main(){

int Arr[] = {5, 10, 15, 20, 25};
int summ = 0;

    for (int i = 0; i < 5; i++)
    {
         summ = summ + Arr[i];
    }
    cout << summ << endl;
    return 0;
}