#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <filesystem>
#include "Names.h"

using namespace std;


void parse(string line) {
    // string  userInfo = "Amy, Smith, 19"; // Input string
    istringstream inSS(line);      // Input string stream
    string firstName;                  // First name
    string lastName;                   // Last name
    int userAge;                       // Age

    // Parse name and age values from input string
//    inSS >> firstName;
//    inSS >> lastName;
//    inSS >> userAge;

    string age;
    getline(inSS, firstName, ',');
    getline(inSS, lastName, ',');
    getline(inSS, age, ',');
    userAge = stoi(age);
    // Output parsed values
//    cout << "First name: " << firstName << endl;
//    cout << "Last  name: " << lastName << endl;
//    cout << "Age: "        << userAge << endl;

    ostringstream oss;

    Names name1 = Names(firstName, lastName);
    cout << name1;

    oss << firstName << " | " << lastName << " | " << userAge << endl;
    ofstream outputF;

    outputF.open("names.out", ios::app);

    outputF << oss.str();
    outputF.close();
    // string s = oss.str();
    // cout << s;
    // return 0;
}



int main() {
    ifstream inputF;
    ofstream outputF;

    inputF.open("names.txt");
    if (!inputF.is_open()) {
        cout << "Can't open the file." << endl;
        return 1;
    }



    outputF.open("names.out");
    outputF.close();
    string line;
    Names name1;
    while (!inputF.eof()) {
        getline(inputF, line);
        if (line.size() > 0) {
            // parse(line);
            istringstream inSS(line);
            inSS >> name1;
        }

        // cout << line << endl;
    }
    inputF.close();

}
