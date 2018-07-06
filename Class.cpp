/*
Create a class, named Student, representing the student's details, as mentioned above, and store the data of a 
student. Create setter and getter functions for each element; that is, the class should at least have following 
functions:
1. get_age, set_age
2. get_first_name, set_first_name
3. get_last_name, set_last_name
4. get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, 
separated by a comma(,). You can refer to stringstream for this.

Input Format :
Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of 
lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the 
last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format :
The code provided by HackerRank will use your class members to set and then get the elements of the Student class.
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
    int y , std;
    string f_name , l_name;
    public:
    Student() {
        y = 0;
        std = 0;
        f_name = '\0';
        l_name = '\0';
    }
    void set_age(int);
    void set_standard(int);
    void set_first_name(string);
    void set_last_name(string);
    int get_age();
    int get_standard();
    string get_first_name();
    string get_last_name();
    string to_string();
};
void Student :: set_age(int age) { y = age; }
void Student :: set_standard(int standard) { std = standard; }
void Student :: set_last_name(string last_name) { l_name = last_name; }
void Student :: set_first_name(string first_name) { f_name = first_name; }
int Student :: get_age() { return y; }
int Student :: get_standard() { return std; }
string Student :: get_last_name() { return l_name; }
string Student :: get_first_name() { return f_name; }
string Student :: to_string() {
    //A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin).
    stringstream ss;
    ss << y << "," << f_name << "," << l_name << "," << std; 
    return ss.str();    //str is member of internal string buffer
}
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
