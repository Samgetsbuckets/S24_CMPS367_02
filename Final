#include <iostream>

void recursiveBubbleSort(int arr[], int n);
void swap(int &a, int &b);

int main() {
    
    std::string courseDept, courseNum, courseName;
    std::cout << "Enter course department: ";
    std::cin >> courseDept;
    std::cout << "Enter course number: ";
    std::cin >> courseNum;
    std::cout << "Enter course name: ";
    std::cin.ignore();
    std::getline(std::cin, courseName);

    std::string assignmentName;
    std::cout << "Enter assignment name: ";
    std::getline(std::cin, assignmentName);

    int pointsPossible;
    std::cout << "Enter points possible for the assignment: ";
    std::cin >> pointsPossible;

    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    int *scores = new int[numStudents];

    std::cout << "Enter scores for each student:\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter score for student " << (i + 1) << ": ";
        std::cin >> scores[i];
    }

    recursiveBubbleSort(scores, numStudents);

    std::cout << "\nSorted scores:\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student " << (i + 1) << ": " << scores[i] << std::endl;
    }

    delete[] scores;

    return 0;
}

void recursiveBubbleSort(int arr[], int n) {
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    recursiveBubbleSort(arr, n - 1);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
