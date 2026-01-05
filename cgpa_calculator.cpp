#include <iostream>
using namespace std;

int main() {
    int n;
    float grade, credit;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of subjects: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "\nSubject " << i << endl;
        cout << "Enter grade points: ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;
    }

    float cgpa = totalGradePoints / totalCredits;
    cout << "\nFinal CGPA: " << cgpa << endl;

    return 0;
}
