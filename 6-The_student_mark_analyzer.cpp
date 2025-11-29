/*Question: The Student’s Marks Analyzer                  //QUESTION 6
💡 Problem Story:
A teacher wants to analyze the marks of her students in a test.
She asks you to write a program that stores the marks of n students and finds out:
The total marks obtained by all students.
The average marks of the class.
Can you help the teacher by writing the program?
Task:
Write a program that takes the number of students and their marks as input and calculates:
ThE total marks
The average marks
Input Format:
The first line contains one integer n — number of students.
The next line contains n integers — marks of each student.
📤 Output Format:
Print two lines:
FIrst line: "Total Marks = <value>"
Second line: "Average Marks = <value>"
Example 1:
Input:
5
80 70 90 85 75
Output:
Total Marks = 400
Average Marks = 80.00*/

#include<iostream>
using namespace std;
int main() 
{ 
int a, total=0;
cout<<"Enter number of students: ";
cin>>a;
int marks[a];
for(int i=0;i<a;i++){
cout<<"Enter marks of student: ";
cin>>marks[i];
total+=marks[i];
}
double average = total/a;
cout <<"Average marks: "<< average <<endl;
cout<<"Total marks: "<<total<<endl;
return 0;
}