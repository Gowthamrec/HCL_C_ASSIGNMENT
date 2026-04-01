#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string post = "Loving the #sunrise today! #nature #photography is amazing!";
    regex pattern("#[a-zA-Z0-9_]+");
    sregex_iterator it(post.begin(), post.end(), pattern);
    sregex_iterator end;

    cout << "Hashtags found:" << endl;
    while (it != end) {
        cout << (*it).str() << endl;
        ++it;
    }
    return 0;
}
