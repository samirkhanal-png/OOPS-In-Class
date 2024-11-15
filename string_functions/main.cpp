#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. String Declaration and Initialization
    // A string can be initialized directly using std::string class.
    string greeting = "Hello, World!";
    cout << "Greeting: " << greeting << endl;

    // 2. Input from the user
    // We can take a string input from the user using cin or getline.
    string name;
    cout << "Enter your name: ";
    getline(cin, name);  // Using getline to include spaces in input
    cout << "Your Name: " << name << endl;

    // 3. String Length
    // length() or size() functions return the number of characters in the string.
    int length = greeting.length();  // or use greeting.size()
    cout << "Length of greeting: " << length << endl;

    // 4. Accessing Characters
    // We can access individual characters in a string using the [] operator or at() function.
    char firstChar = greeting[0];
    char secondChar = greeting.at(1);
    cout << "First character: " << firstChar << endl;
    cout << "Second character: " << secondChar << endl;

    // 5. Appending and Concatenating Strings
    // We can concatenate strings using the + operator or append() function.
    string firstName = "Geek";
    string lastName = "Geeks";
    string fullName = firstName + " " + lastName;  // Using + operator for concatenation
    cout << "Full Name: " << fullName << endl;

    string base = "Hello";
    base.append(" World!");  // Using append() function to add to the string
    cout << "Appended String: " << base << endl;

    // 6. String Comparison
    // We can compare strings using the == operator or compare() function.
    string str1 = "apple";
    string str2 = "banana";

    if (str1 == str2) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    int result = str1.compare(str2);
    if (result == 0) {
        cout << "Strings are equal" << endl;
    } else if (result < 0) {
        cout << "str1 comes before str2" << endl;
    } else {
        cout << "str1 comes after str2" << endl;
    }

    // 7. Substrings
    // We can extract a substring from a string using the substr() function.
    string text = "Hello, World!";
    string sub = text.substr(7, 5);  // Extracting "World"
    cout << "Substring: " << sub << endl;

    // 8. Searching in a String
    // We can find a substring within a string using the find() function.
    string searchIn = "C++ Programming";
    size_t position = searchIn.find("Programming");  // Searching for "Programming"
    if (position != string::npos) {
        cout << "Found at position: " << position << endl;
    } else {
        cout << "Not found" << endl;
    }

    // 9. Modifying Strings
    // We can modify strings using functions like replace(), insert(), and erase().
    //str.replace(index, length, new_string);

    string modify = "I like dogs.";
    modify.replace(7, 4, "cats");  // Replacing "dogs" with "cats"
    cout << "Modified String (replace): " << modify << endl;

    //useful to insert string in the middle of the string
    //str.insert(index, new_string);
    modify.insert(6, " black");  // Inserting " black" at position 6
    cout << "Modified String (insert): " << modify << endl;

    //erase function removes a portion of the string
    modify.erase(6, 6);  // Erasing " black"
    cout << "Modified String (erase): " << modify << endl;

    // 10. Conversion from std::string to C-style string
    // We can convert a C++ string to a C-style string using the c_str() function.
    string cppString = "C++";
    const char* cString = cppString.c_str();  // Convert to C-style string
    cout << "C-style string: " << cString << endl;

    return 0;
}
