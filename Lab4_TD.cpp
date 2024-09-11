// Lab4_TD.cpp : This file contains the 'main' function. Program execution begins and ends there. //

#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    float x;
    int i;
    int a = 1;
    cout << "Factorial: ";
    cout << "\nEnter a number: ";
    cin >> x;
    while (x < 0){
        cout << "Nice try, please enter a POSITIVE number...: ";
        cin >> x;
        if (x > 0) {
            break;
        }
    }
            cout << x << "! = ";
            for (int i = 1; i <= x; i++) {
                a = a * i;
                cout << i << " ";
                if (i == x){
                    break;
                }
                cout << " * ";
            }
            cout << " = " << a << endl;
}
void arithmetic() {
    int x;
    int y;
    int n;
    int c;
    int t;
    cout << "Arithmetic Series: ";
    cout << "\nEnter a number to start at: ";
    cin >> x;
    cout << "Enter a number to add each time: ";
    cin >> y;
    cout << "Enter the number of elements in the series: ";
    cin >> n;
    for (int c = 1; c <= n; c++){
        cout << x << " ";
        t = t + x;
        x = x + y;
        if (c == n){
            break;
        }
        else{
            cout << "+ ";
        }
    }
    cout << "= " << t << endl;
}
void geometric() {
    int r;
    int a;
    int n;
    int c;
    int t;
    cout << "Geometric Series: ";
    cout << "\nEnter a number to start at: ";
    cin >> r;
    cout << "Enter a number to multiply by each time: ";
    cin >> a;
    cout << "Enter the number of elements in the series: ";
    cin >> n;
    for (int c = 1; c <= n; c++){
        cout << r << " ";
        t = t + r;
        r = r * a;
        if (c == n){
            break;
        }
        cout << "+ ";
    }
    cout << "= " << t;
}
int main(){
    int choice;
    char again;

    do {
        printMenu();
        cin >> choice;
        
        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }

        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }
        
        cout << "\nGo Again? [Y/N] ";
        cin >> again;

    } while (again == 'y' || again == 'Y');
}
