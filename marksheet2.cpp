#include<iostream>
using namespace std;

int main() {
    float phy, che, math, total_marks, per;

    // Taking input for the marks
    cout << "Enter your Physics, Chemistry, and Math marks (out of 100 each):" << endl;
    cin >> phy >> che >> math;

    // Checking if the marks entered are valid
    if (phy < 0 || che < 0 || math < 0 || phy > 100 || che > 100 || math > 100) {
        cout << "Invalid marks entered. Please enter marks between 0 and 100." << endl;
    }

    // Calculating total marks and percentage
    total_marks = phy + che + math;
    per = total_marks / 3;

    // Checking for subject-wise pass/fail
    if (phy < 33 || che < 33 || math < 33) {
        if (phy < 33 && che >= 33 && math >= 33) {
            cout << "Fail in Physics" << endl;
        }
        else if (che < 33 && phy >= 33 && math >= 33) {
            cout << "Fail in Chemistry" << endl;
        }
        else if (math < 33 && phy >= 33 && che >= 33) {
            cout << "Fail in Math" << endl;
        }
        else if (phy < 33 && che < 33 && math >= 33) {
            cout << "Fail in Physics and Chemistry" << endl;
        }
        else if (phy >= 33 && che < 33 && math < 33) {
            cout << "Fail in Chemistry and Math" << endl;
        }
        else if (phy < 33 && che >= 33 && math < 33) {
            cout << "Fail in Physics and Math" << endl;
        }
        else if (phy < 33 && che < 33 && math < 33) {
            cout << "Fail in all subjects" << endl;
        }
    }
    else {
        // If passed in all subjects, print total marks and percentage
        cout << "Total Marks = " << total_marks << endl;
        cout << "Percentage = " << per << "%" << endl;

        // Determining division based on percentage
        if (per >= 60) {
            cout << "First Division" << endl;
        }
        else if (per >= 45) {
            cout << "Second Division" << endl;
        }
        else {
            cout << "Third Division" << endl;
        }
    }

    return 0;
}
