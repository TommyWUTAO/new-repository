#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of the elements: ";
    cin>>n;
    int* number = new int[n];
    cout<<"Enter "<<n<<"integers.";
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>number[i];
        sum+=number[i];
    }
    double average = sum/n;
    cout<<"AVerage is "<<average;
    delete[] number;
}
