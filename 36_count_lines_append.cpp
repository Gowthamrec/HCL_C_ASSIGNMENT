#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "lines.txt";

    ofstream out(filename);
    out << "Line one" << endl;
    out << "Line two" << endl;
    out << "Line three" << endl;
    out.close();

    int count = 0;
    string line;
    ifstream in(filename);
    while (getline(in, line)) count++;
    in.close();

    fstream fs(filename, ios::app);
    fs << "Total Lines: " << count << endl;
    fs.close();

    ifstream show(filename);
    cout << "--- File Contents ---" << endl;
    while (getline(show, line))
        cout << line << endl;
    show.close();
    return 0;
}
