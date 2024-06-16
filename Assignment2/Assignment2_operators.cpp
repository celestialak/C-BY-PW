
//question1-- Write a program to check whether two numbers (entered by user) are equal or not (0 for not equal, 1 for equal)
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"FIRST INPUT = ";
	cin>>x;
	cout<<"SECOND INPUT = ";
	cin>>y;
	cout<<(x == y) ? 1 : 0;
	return 0;
		
}


//question2-Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
#include<iostream>
using namespace std;
int main(){
	int a,b,m,n;
	cout<<"FIRST INPUT = ";
	cin>>a;
	cout<<"SECOND INPUT = ";
	cin>>b;
	m=a<50;
	n=a<b;
	cout<< m && n ;
	return 0;			
}



//question3-Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
#include <iostream>

int main() {
    int totalStudents = 45;
    int boys = 25;
    int boysWithA = 17;
    float percentageOfBoysWithA = 0.80;

    // Calculate total number of students who received an "A"
    int totalStudentsWithA = boysWithA / percentageOfBoysWithA;

    // Calculate the number of girls who received an "A"
    int girlsWithA = totalStudentsWithA - boysWithA;

    std::cout << "The number of girls who received grades 'A' is: " << girlsWithA << std::endl;

    return 0;
}

//question4 - Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include<iostream>
using namespace std;
int main(){
	int n, first, second, third, fourth, fifth, sum;
	n = 12345;
	first = n/10000; //first digit
	n = n%10000;
	second = n/1000; //second digit
	n = n%1000;
	third = n/100; //third digit
	n = n%100;
	fourth = n/10; //fourth digit
	fifth = n%10; //fifth digit
	sum = first + fourth;
 	cout << "sum of first and fourth digit is: " << sum << endl;
	return 0;
}


//question5	- - write a program to calculate the sum of digits of a 3 digit number.
#include <iostream>
using namespace std;
int main()
{
int n, first, second, third,sum;

first = n/100; //first digit
n = n%100;
second = n/10; //second digit
third = n%10; //third digit
sum = first + second + third;
cout << "sum of 3 digits is: " << sum << endl;
return 0;
}



//question6 - Design a calculator to perform basic arithmetic operations (+,-,/,*)
# include <iostream>
using namespace std;
int main() {
float num1, num2;
cout << "Enter the first number ";
cin >> num1;
cout << "Enter the second number ";
cin >> num2;
cout << "Sum = " << num1 + num2<<endl;
cout <<"Difference = " << num1 - num2<<endl;
cout <<"Product = " << num1 * num2<<endl;
cout << "Division = " << num1 / num2<<endl;
return 0;
}

