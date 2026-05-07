// 33_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <exception>
#include "MobileProvider.h"

using std::cout;
using std::endl;
using std::cin;

/*
float average(int arr[], int size) {
    if (size <= 0 || arr == nullptr) {
        throw std::out_of_range("Out of range  \n");
    }
    int amount = 0;
    float sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            amount++;
            sum += arr[i];
        }
    }

    if (amount == 0) {
        throw std::runtime_error("No pairs in Array\n");
    }
  

    return sum / amount;
}
*/

int main()
{
    /*
    int a = 0, b = 0;
    float c = 0;
    cout << "Введіть два числа: ";
    cin >> a >> b;
    try {
       
        if (b == 0) throw std::runtime_error("Divde by zero");

        c = a / b;
        cout << "Result: " << c << std::endl;
    }
    catch (const std::exception& s) {
        cout << " ERROR!" << s.what() << endl;
    }
    catch (...) {
        cout << "Underfined" << endl;
    }

    cout << "Finish" << endl;
    */
    

    // 2 Task
    /*
    int A[5]{ 4, 2, 4, 76, 6 };
    int B[5]{ 1, 2, 7, 76, 6 };
    float a1 = 0, b1 = 0;
    try{
        a1 = average(A, 5);
    cout << "Результат: " << a1 << endl;
    }
    catch (const std::exception& s) {
        cout << s.what() << endl;
    }
    try {
        b1 = average(B, 5);
        cout << "Результат: " << b1 << endl;
    }
    catch (const std::exception& s) {
        cout << s.what() << endl;
    }
    */

    // 3 Task

    MobileProvider Kyiv("Kyivstar");
    for (int i = 0; i < 3; i++) {
        string title;
        float price;
        cout << "Enter packet name ";
        cin >> title;
        cout << " Enter price ";
        cin >> price;
        try {
            Kyiv.addTariff(new SecondsTariff(title, price));
        }
        catch (const MobileException& obj) {
            cout << "Error " << obj.showMessage() << endl;

        }
    }

    cout << "=============================================" << endl;
    Kyiv.showList();
}


