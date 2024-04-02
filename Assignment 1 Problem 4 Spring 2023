#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printHeader(int start, int end) {

    cout << setw(4) << " ";
    
    for (int firstrow = start; firstrow <= end; firstrow++) {

        cout << setw(3) << firstrow << " ";

    }

    cout << endl;

    cout << setw(4) << " ";

    for (int secondrow = start; secondrow <= end; secondrow++) {

    cout << "----";

    }

    cout << endl;

}

int main() {

    int start;

    int end;

    cout << "Enter the starting range for multiplying the numbers in Multiplication Table: " << endl;
    cin >> start;
    cout << "Enter the ending range for multiplying the numbers in Multiplication Table: " << endl;
    cin >> end;

    for (int i = start; i <= end; i++) {

        if (i == start) {

            printHeader(start, end);

        }

        for (int j = start; j <= end; j++) {

            if (j == start) {

                cout << setw(3)<<  i << "|";

            }
 
            cout << setw(3) << (i * j) << " ";

        }

        cout << endl;

    }

    return 0;
}
