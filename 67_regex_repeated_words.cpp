#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string sentence = "the the cat sat on on the mat mat";
    regex pattern("\\b(\\w+)\\s+\\1\\b");
    sregex_iterator it(sentence.begin(), sentence.end(), pattern);
    sregex_iterator end;

    cout << "Repeated words found:" << endl;
    while (it != end) {
        cout << "\"" << (*it).str() << "\"" << endl;
        ++it;
    }
    return 0;
}
