
#include <iostream>
#include <algorithm>
#include <valarray>
using namespace std;


int main() {
    int window;
    int l;
    cin >> l;//This is my divisor selection
    const int size = 15;
    double N[size] = { 1,3,5,7,8,18,4,1,4,3,5,7,5,6,7 };
    int l_size = l;
    double sum = 0;
    double mAvg = 0;

    cout << "Input Percentage window %: ";   cin >> window;

    for (int i = 0; i <= (size - l_size); i++) {

        sum = 0;
        cout << "Numbers" << " : ";


        for (int j = i; j < i + l_size; j++) {
            sum += N[j];
            cout << N[j] << " ";
        }


        mAvg = sum / l_size;
        //cout << endl << "Moving Average: " << mAvg << endl << endl;
        cout << endl;

    }


    return 0;
}
