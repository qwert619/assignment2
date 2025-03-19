#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class BMI{
public:
    double height;
    double weight;
    double bmi;

    BMI();
    void setBMI();
    void setHeight();
    void setWeight();
    void calculateBMI();
};

BMI::BMI(){
    height = 1.0;
    weight = 1.0;
}

void BMI::setBMI(){
    bmi = weight / (height * height);
    bmi = bmi * 10;
    bmi = round(bmi);
    bmi = bmi / 10;
    cout << "Your BMI is: " << bmi << endl;
}

void BMI::setHeight(){
    double feet, inches;
    cout << "Example: 5 feet 10 inches\n";
    
    cout << "Enter your feet: ";
    while (!(cin >> feet) || feet <= 0){
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << "Enter your inches: ";
    while( !(cin >> inches) || !(inches >= 0 && inches < 12)){
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    height = (feet * 12) + inches;
    height = height * 0.025;
}

void BMI::setWeight(){
    cout << "Enter your weight in pounds: ";
    while((!(cin >> weight) || weight <= 0)){
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    weight = weight * 0.45;
}

void BMI::calculateBMI(){
    if (bmi < 18.5)
        cout << "Underweight\n\n";
    if (bmi >= 18.5 && bmi < 24.9)
        cout << "Normal\n\n";
    if (bmi >= 25 && bmi < 29.9)
        cout << "Overweight\n\n";
    if (bmi >= 30)
        cout << "Obese\n\n";
}

int main(){
    char choice;
    cin.clear();
    do{
    BMI user;
    user.setHeight();
    user.setWeight();
    user.setBMI();
    user.calculateBMI();
    cout << "Would you like to calculate another BMI? (y/n): ";
    
    while (!(cin >> choice) || (choice != 'y' && choice != 'n')){
        cout << "Invalid input. Please enter 'y' or 'n': ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    cout << endl;
    } while (choice == 'y');
    return 0;
}
