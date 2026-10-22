// AiCT Lab | C++ Loops - All 8 Tasks in One File
// Student Name:
// Roll Number:
// Class / Section:
// Date:

#include <iostream>
using namespace std;

// Task 1: Count Up and Down
void task1() {
    cout << "\n--- Task 1: Count Up and Down ---\n";

    // Count up from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Count down from 10 to 1
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}

// Task 2: Table of a Number
void task2() {
    cout << "\n--- Task 2: Table of a Number ---\n";

    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i
             << " = " << number * i << endl;
    }
}

// Task 3: Sum of First n Numbers
void task3() {
    cout << "\n--- Task 3: Sum of First n Numbers ---\n";

    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "Sum = " << sum << endl;
}

// Task 4: Count Digits
void task4() {
    cout << "\n--- Task 4: Count Digits ---\n";

    int number, temp, digits = 0;
    cout << "Enter a number: ";
    cin >> number;

    temp = number;
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            temp = temp / 10;
            digits++;
        }
    }
    cout << "Digits = " << digits << endl;
}

// Task 5: Factorial
void task5() {
    cout << "\n--- Task 5: Factorial ---\n";

    int n;
    unsigned long long factorial = 1;
    cout << "Enter a number (0 to 12): ";
    cin >> n;

    if (n < 0 || n > 12) {
        cout << "Please enter a number from 0 to 12." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        cout << n << "! = " << factorial << endl;
    }
}

// Task 6: Star Triangle
void task6() {
    cout << "\n--- Task 6: Star Triangle ---\n";

    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Task 7: Average Marks
void task7() {
    cout << "\n--- Task 7: Average Marks ---\n";

    int mark, total = 0, count = 0;
    cout << "Enter marks (-1 to stop): ";
    while (cin >> mark && mark != -1) {
        total = total + mark;
        count++;
    }

    if (count > 0) {
        double average = static_cast<double>(total) / count;
        cout << "Average = " << average << endl;
    } else {
        cout << "No marks were entered." << endl;
    }
}

// Task 8: Find the Bug
// Original mistake was: for (int i = 0; i < 5; i--)
// i keeps decreasing, so i < 5 stays true (infinite loop).
// Fixed by changing i-- to i++.
void task8() {
    cout << "\n--- Task 8: Find the Bug ---\n";

    // Correct loop: i increases by 1 each time
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int choice;

    do {
        cout << "\n===== AiCT Lab | C++ Loops =====\n";
        cout << "1. Count Up and Down\n";
        cout << "2. Table of a Number\n";
        cout << "3. Sum of First n Numbers\n";
        cout << "4. Count Digits\n";
        cout << "5. Factorial\n";
        cout << "6. Star Triangle\n";
        cout << "7. Average Marks\n";
        cout << "8. Find the Bug\n";
        cout << "0. Exit\n";
        cout << "Choose a task: ";
        cin >> choice;

        switch (choice) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 4: task4(); break;
            case 5: task5(); break;
            case 6: task6(); break;
            case 7: task7(); break;
            case 8: task8(); break;
            case 0: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

        // Clear input errors (e.g., letters typed where a number was expected)
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            choice = -1;
        }
    } while (choice != 0);

    return 0;
}
