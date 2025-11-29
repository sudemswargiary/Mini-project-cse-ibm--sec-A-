/* **Problem Title: ADTU Canteen Bill Analyzer          //QUESTION 15
Story:
At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.
🧠 Your Tasks:
Given the 2D array bill, write a program to:
Print the total amount spent by each student in the week.
Find the day with the highest total collection.
Identify the student (or students) who spent the most overall.
Input Format:
The first line contains two integers:
n → number of students
m → number of days
The 
📤 Output Format:
Print each student’s total weekly spending.
Print which day had the highest total collection.
Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30
Output:
Student 1 total: ₹200  
Student 2 total: ₹110  
Student 3 total: ₹200  
Student 4 total: ₹90  
Highest collection on Day 2  
Highest spender: Student 1 and Student 3*/

#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter number of days: ";
    cin >> m;

    int bill[50][50];       
    int studentTotal[50] = {0};
    int dayTotal[50] = {0};

    cout << "\nEnter the canteen bill amounts (in ₹):\n";
    cout << "(Each row = one student, each column = day)\n\n";

   
    for (int i = 0; i < n; i++) {
        cout << "Enter bill for Student " << i + 1 << " (" << m << " days): ";
        for (int j = 0; j < m; j++) {
            cin >> bill[i][j];
            studentTotal[i] += bill[i][j];  
            dayTotal[j] += bill[i][j];      
        }
    }

    cout << "\n Weekly Canteen Summary \n";

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total: Rs" << studentTotal[i] << endl;
    }

   
    int maxCollection = dayTotal[0];
    int bestDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > maxCollection) {
            maxCollection = dayTotal[j];
            bestDay = j;
        }
    }

    cout << "\nHighest collection on Day " << bestDay + 1 << endl;


    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpend)
            maxSpend = studentTotal[i];
    }

    cout << "Highest spender: ";
    bool first = true;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            if (!first) cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }
    cout << endl;

    return 0;
}