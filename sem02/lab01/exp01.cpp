#include <iostream>
using namespace std;

int main() {
    int n;
    float avg = 0;
    int highest = 0;
    int lowest = 0;
    cout << "Enter total number of marks you want to calculate:\n";
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++){
            int mark;
            cout << "Enter mark # " << i+1 << ": ";
        cin >> mark;
        marks[i]  = mark;
        if (mark > highest){
            highest = mark;
        }
        if (lowest != 0 && mark < lowest){
            lowest = mark;
        }else if (lowest == 0){
            lowest = mark;
        }
        if (mark > 40){
            avg += mark;
        }
    }
    cout << "Highest Mark: " << highest <<endl;
    cout << "Lowest Mark: " << lowest <<endl;
    cout << "Average Mark: " << avg/n <<endl;
    cout << "Mark evaluations by grading----------------------------" << endl;
    for (int i =0; i < n; i++){

        string grade = "";
        if (marks[i] > 80){
            grade = "A+";
        }
        else if (marks[i] > 70 && marks[i] < 80){
            grade = "A";
        }
        else {
            grade = "Not Evaluated";
        }
        cout << marks[i] << " --------------- " << grade << endl;
    }
    return 0;


}
