#include <iostream>
#include <string>

using namespace std;

const int NUM_STUDENTS = 7;
const int NUM_TESTS = 5;

char calculate_grade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

void read_data(string names[], int scores[][NUM_TESTS]) {
    names[0] = "Johnson"; scores[0][0] = 85; scores[0][1] = 83; scores[0][2] = 77; scores[0][3] = 91; scores[0][4] = 76;
    names[1] = "Aniston"; scores[1][0] = 80; scores[1][1] = 90; scores[1][2] = 95; scores[1][3] = 93; scores[1][4] = 48;
    names[2] = "Cooper"; scores[2][0] = 78; scores[2][1] = 81; scores[2][2] = 11; scores[2][3] = 90; scores[2][4] = 73;
    names[3] = "Kamran"; scores[3][0] = 92; scores[3][1] = 83; scores[3][2] = 30; scores[3][3] = 69; scores[3][4] = 87;
    names[4] = "Blair"; scores[4][0] = 23; scores[4][1] = 45; scores[4][2] = 96; scores[4][3] = 38; scores[4][4] = 59;
    names[5] = "Majid"; scores[5][0] = 77; scores[5][1] = 31; scores[5][2] = 52; scores[5][3] = 74; scores[5][4] = 83;
    names[6] = "Junaid"; scores[6][0] = 79; scores[6][1] = 85; scores[6][2] = 28; scores[6][3] = 93; scores[6][4] = 82;
}

void calculate_results(string names[], int scores[][NUM_TESTS], double averages[], char grades[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int sum = 0;
        for (int j = 0; j < NUM_TESTS; j++) {
            sum += scores[i][j];
        }
        averages[i] = sum / (double)NUM_TESTS;
        grades[i] = calculate_grade(averages[i]);
    }
}

void print_results(string names[], int scores[][NUM_TESTS], double averages[], char grades[]) {
    double class_sum = 0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << names[i] << "\t";
        for (int j = 0; j < NUM_TESTS; j++) {
            cout << scores[i][j] << " ";
        }
        cout << "\tAverage: " << averages[i] << "\tGrade: " << grades[i] << endl;
        class_sum += averages[i];
    }
    cout << "Class Average: " << class_sum / NUM_STUDENTS << endl;
}

int main() {
    string names[NUM_STUDENTS];
    int scores[NUM_STUDENTS][NUM_TESTS];
    double averages[NUM_STUDENTS];
    char grades[NUM_STUDENTS];

    read_data(names, scores);
    calculate_results(names, scores, averages, grades);
    print_results(names, scores, averages, grades);

    return 0;
}
