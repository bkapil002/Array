#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    float number[num];
    float sum = 0;

    cout<<"Enter " << num << "number: " << endl;

    for(int i = 0 ; i < num ; i++){
        cin >> number[i];
        sum += number[i];
    }

    float average = sum / num;
    cout << "Average: "<<num << " Number is: " << average << endl;
     return 0;
}