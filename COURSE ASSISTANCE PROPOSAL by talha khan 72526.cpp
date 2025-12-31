#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main() {
    int option, choice;
    string username, password;

    do {
        cout << setfill('=') << setw(40) << "=" << endl;
        cout << setfill('=') << setw(40) << "=" << endl;
        cout <<setw(25)<<right<< "MAIN MENU" << endl;
        cout << setfill('=') << setw(40) << "=" << endl;

        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit" << endl;
        cout << setfill('=') << setw(40) << "=" << endl;
        cin >> option;

        if (option == 3) {
            cout << "Program Exited." << endl;
            break;
        }

        cout << "Enter username: ";
        cin >>

        cout << "Enter password: ";
        cin >> password;

        if (option == 1 && username == "khan" && password == "007") {
            cout << "Admin Login Successful" << endl;

            do {
                cout << setfill('=') << setw(40) << "=" << endl;
                cout << setw(30) << right << "ADMIN MENU" << endl;
                cout << setfill('=') << setw(40) << "=" << endl;

                cout << setfill(' ') << setw(25) << left << "1. Add Course" << endl;
                cout << setw(25) << left << "2. Update Course" << endl;
                cout << setw(25) << left << "3. Delete Course" << endl;
                cout << setw(25) << left << "4. View lal Courses" << endl;
                cout << setw(25) << left << "5. Logout" << endl;
                cout << setfill('=') << setw(40) << "=" << endl;
                cin >> choice;

                switch (choice) {
                    case 1:
                        cout << "Course Added." << endl;
                        break;
                    case 2:
                        cout << "Course Updated." << endl;
                        break;
                    case 3:
                        cout << "Course Deleted." << endl;
                        break;
                    case 4:
                        cout << "Courses: Math, English, Programming." << endl;
                        break;
                    case 5:
                        cout << "Logging out..." << endl;
                        break;
                    default:
                        cout << "Invalid Option." << endl;
                }
            } while (choice != 5);
        }

        else if (option == 2 && username == "khan" && password == "007") {
            cout << "Student Login Successful" << endl;

            do {
                cout << setfill('=') << setw(40) << "=" << endl;
                cout << setw(32) << right << "STUDENT MENU" << endl;
                cout << setfill('=') << setw(40) << "=" << endl;

                cout << setfill(' ') << setw(25) << left << "1. View Courses" << endl;
                cout << setw(25) << left << "2. Enroll in Course" << endl;
                cout << setw(25) << left << "3. Drop Course" << endl;
                cout << setw(25) << left << "4. View Profile" << endl;
                cout << setw(25) << left << "5. Logout" << endl;
                cout << setfill('=') << setw(40) << "=" << endl;
                cin >> choice;

                switch (choice) {
                    case 1:
                        cout << "Courses: Math, English, Programming." << endl;
                        break;
                    case 2:
                        cout << "You are now enrolled." << endl;
                        break;
                    case 3:
                        cout << "Course dropped successfully." << endl;
                        break;
                    case 4:
                        cout << "Profile: Student Name = Khan, ID = 007." << endl;
                        break;
                    case 5:
                        cout << "Logging out..." << endl;
                        break;
                    default:
                        cout << "Invalid Option." << endl;
                }
            } while (choice != 5);
        }

        else {
            cout << "Incorrect username or password." << endl;
        }

    } while (true);

    return 0;
}

