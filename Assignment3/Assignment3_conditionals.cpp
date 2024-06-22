// question1 - Write a program which takes the values of length and breadth from user and check if it is a square or not
#include<iostream>
using namespace std;
int main(){
	int x, y;
	cout<<"Enter the length = ";
	cin>>x;
	cout<<"Enter the breath = ";
	cin>>y;
	if (x==y){
		cout<<"the given shape is a square";
	}
	else{
		cout<<"the given shape is rectangle";
	}
	return 0;
}


// question2 - Write a program to print absolute value of a number entered by the user.
#include<iostream>
using namespace std;
int main(){
    double number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    // Compute the absolute value manually
    double absolute_value;
    if (number < 0) {
        absolute_value = -number;
    } else {
        absolute_value = number;
    }
    
    
    cout << "The absolute value is: " << absolute_value << endl;
    
    return 0;
}



//question 3 - Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.
#include<iostream>
using namespace std;
int main(){
	int costPrice , sellingPrice ;
	cout<<"Type the cost price ";
	cin>>costPrice;
	cout<<endl;
	cout<<"Type the selling price ";
	cin>>sellingPrice;
	cout<<endl;
	
	if(costPrice>sellingPrice){
		cout<<"loss = "<<costPrice - sellingPrice<<endl;
		}
	else{
		cout<<"profit = "<<sellingPrice - costPrice<<endl;	
	}
	return 0;
}


//question 4 -Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.
#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter the number = ";
	cin>>number;
	cout<<endl;
	if(number>0){
		cout<<"The number entered is positive = "<<number;
	}
	else{
	
	}
	return 0;
}



//question 5 - Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division
#include <iostream>

int main() {
    double num1, num2;
    char op;

    // Prompt the user to enter two numbers and an operator
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform the arithmetic operation based on the operator
    switch(op) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
            break;
    }

    return 0;
}



//question 6 - Write a program to calculate marks to grades . 
#include <iostream>

int main() {
    int marks;

    // Prompt the user to enter their marks
    std::cout << "Enter Your Marks: ";
    std::cin >> marks;

    // Determine the grade based on the marks
    char grade;

    if (marks >= 90 && marks <= 100) {
        grade = 'A+';
    } else if (marks >= 80 && marks < 90) {
        grade = 'A';
    } else if (marks >= 70 && marks < 80) {
        grade = 'B+';
    } else if (marks >= 60 && marks < 70) {
        grade = 'B';
    } else if (marks >= 50 && marks < 60) {
        grade = 'C';
    } else if (marks >= 40 && marks < 50) {
        grade = 'D';
    } else if (marks >= 30 && marks < 40) {
        grade = 'E';
    } else if (marks >= 0 && marks < 30) {
        grade = 'F';
    } else {
        std::cout << "Invalid marks entered." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Output the grade
    std::cout << "Your Grade is: " << grade << std::endl;

    return 0;
}

