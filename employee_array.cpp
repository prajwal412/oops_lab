#include <iostream>
#include <string>

class Student {
private:
    std::string usn;
    std::string name;
    double marks[3];

public:
    void readData() {
        std::cout << "Enter USN: ";
        std::cin >> usn;
        
        std::cout << "Enter Name: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        
        std::cout << "Enter marks for 3 subjects:\n";
        for (int i = 0; i < 3; ++i) {
            std::cout << "Subject " << (i + 1) << ": ";
            std::cin >> marks[i];
        }
    }

    void displayData() {
        std::cout << "USN: " << usn << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: ";
        for (int i = 0; i < 3; ++i) {
            std::cout << marks[i] << " ";
        }
        std::cout << std::endl;
    }

    double calculateAverage() {
        double sum = 0;
        double maxMark = marks[0];
        for (int i = 0; i < 3; ++i) {
            sum += marks[i];
            if (marks[i] > maxMark) {
                maxMark = marks[i];
            }
        }
        return (sum - maxMark) / 2.0;
    }

    static Student findTopper(Student students[], int count) {
        double maxAvg = students[0].calculateAverage();
        int index = 0;

        for (int i = 1; i < count; ++i) {
            double avg = students[i].calculateAverage();
            if (avg > maxAvg) {
                maxAvg = avg;
                index = i;
            }
        }

        return students[index];
    }
};

int main() {
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;

    Student students[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter details for student " << (i + 1) << ":\n";
        students[i].readData();
        std::cout << std::endl;
    }

    std::cout << "Student details:\n";
    for (int i = 0; i < n; ++i) {
        students[i].displayData();
    }

    Student topper = Student::findTopper(students, n);
    std::cout << "Topper details:\n";
    topper.displayData();

    return 0;
}
