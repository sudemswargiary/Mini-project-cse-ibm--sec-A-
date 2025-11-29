/* 🌡️ Problem Title: Chef’s Temperature Converter          //QUESTION 2
💡 Problem Story:
Chef Rohan is preparing a special recipe that needs the oven temperature in Fahrenheit,
but his thermometer only shows Celsius readings.
He needs your help to convert the temperature from Celsius to Fahrenheit
so that his dish cooks perfectly.
Can you write a program to help Chef Rohan convert Celsius to Fahrenheit?
🧠 Task:
Write a program that takes a temperature in Celsius as input
And prints the equivalent temperature in Fahrenheit.
📥 Input Format:
The input contains a single floating-point or integer number C — the temperature in Celsius.
📤 Output Format:
Print the temperature in Fahrenheit rounded to 2 decimal places,
in the format:
"Temperature in Fahrenheit = <value>"
📏 Formula:
F= (C*9/5)+32  */

#include<iostream>
using namespace std;
int main()
{
float c;
cout<<"enter temperature in celsius:";
cin>>c;
float f = (c*9/5)+32;
cout<<"temperature in Fahrenheit:"<<f<<endl;
return 0;
}