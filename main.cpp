#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
    
    string age;
    string name;
    string gender;
    string BMIMeaning;
    int heightinches;
    int heightft;
    int weight;
    
    std::cout << "------------------------------BMI Calculator-----------------------------\n";
    std::cout << "|              Category              |              BMI Range           |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|           Severe Thinness          |                < 16              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|          Moderate Thinness         |               16 - 17            |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|            Mild Thinness           |              17 - 18.5           |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|               Normal               |              18.5 - 25           |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|             Overweight             |               25 - 30            |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|            Obese Class 1           |               30 - 35            |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|            Obese Class 2           |               35 - 40            |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|            Obese Class 3           |                > 40              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
   
    cout << "Please enter your name:";
    cin >> name;
    cout << "Please enter your age:";
    cin >> age;
    cout << "Please enter your Gender:";
    cin >> gender;
    cout << "Please enter your height in feet:";
    cin >> heightft;
    cout << "Please enter your height in inches:";
    cin >> heightinches;
    cout << "Please enter your weight in pounds:";
    cin >> weight;
    
    int inches = (heightft * 12) + heightinches;
    int BMI = (weight * 703) / (inches * inches);
    

    
    if (BMI <= 16)
        
    {
        BMIMeaning = "Severe Thinness";
    }   else if (BMI > 16 && BMI <= 17) {
        BMIMeaning = "Moderate Thinness";
    }   else if (BMI > 17 && BMI <= 18.5) {
        BMIMeaning = "Mild Thinness";
    }   else if (BMI > 18.5 && BMI <= 25) {
        BMIMeaning = "Normal";
    }   else if (BMI > 25 && BMI <= 30) {
        BMIMeaning = "Overweight";
    }   else if (BMI > 30 && BMI <= 35) {
        BMIMeaning = "Obese Class 1";
    }   else if (BMI > 35 && BMI <= 40) {
        BMIMeaning = "Normal";
    }   else {
        BMIMeaning = "Obese Class 3";
    }
    
    
    cout << "Hi " << name << ", you are a "<< gender << ". You are " << age << " years old. You are currently " << heightft << "’" << heightinches << " and you currently weigh " << weight << " pounds. Your BMI is " << BMI << ", which is " << BMIMeaning << ".";

    return 0;
}
