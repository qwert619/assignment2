#include <iostream>
#include <string>


using namespace std;

class BMI{
public:
    int height;
    int weight;
    int bmi;

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
}

void BMI::setHeight(){
    cout << "Enter your height in feet: ";
    cin >> height;
}

void BMI::setWeight(){
    cout << "Enter your weight in pounds: ";
    cin >> weight;
}

void BMI::calculateBMI(){
    if (bmi < 18.5)
        cout << "Underweight";
    if (bmi >= 18.5 && bmi < 24.9)
        cout << "Normal";
    if (bmi >= 25 && bmi < 29.9)
        cout << "Overweight";
    if (bmi >= 30)
        cout << "Obese";
}

int main(){
    BMI user;
    user.setHeight();
    user.setWeight();
    user.setBMI();
    user.calculateBMI();
    return 0;
}
