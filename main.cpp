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
    cout << "Example 5 feet 10 inches\n";
    cout << "Enter your feet: ";
    cin >> height;
    height = height * 0.025;
}

void BMI::setWeight(){
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    weight = weight * 0.45;
}

void BMI::calculateBMI(){
    if (bmi < 18.5)
        cout << "Underweight\n";
    if (bmi >= 18.5 && bmi < 24.9)
        cout << "Normal\n";
    if (bmi >= 25 && bmi < 29.9)
        cout << "Overweight\n";
    if (bmi >= 30)
        cout << "Obese\n";
}

int main(){
    BMI user;
    user.setHeight();
    user.setWeight();
    user.setBMI();
    user.calculateBMI();
    return 0;
}
