#include "eecs230.h"

/*
class Bad_area{};

int area(int length, int width){ //Calculates the area of a rectangle
    if (length<=0 || width<=0) throw Bad_area{};
    int a = length*width;
    return a;
}

double some_function(){
    double d = 0;
    cin>>d;
    if(!cin)error("couldn't read a double in 'some_function'");
}
*/

//This is the code for Lab 2.

//Problem 1
bool isOdd (int i){
    if (!cin){
        simple_error("Please enter a valid input, an integer.");
    }
    if (i==0){
        cout << "0 is neither even nor odd.";
        return false;
    } else if (i%2==0){
        cout << "The value of " << i << " is even.";
        return false;
    } else if (i%2==1){
        cout << "The value of " << i << " is odd.";
        return true;
    }
}

//Problem 2
//Note: in switch, the cases must be with chars or ints.
double DoOperation (){
    char s;
    double d1;
    double d2;
    cout << "Enter the operator desired, a numerical value, then another numerical value.";
    cin >> s >> d1 >> d2;
    if (!cin){
        simple_error("Please enter valid inputs.");
    }
    switch (s){
        case '+':
            return d1+d2;
        break;
        case '-':
            return d1-d2;
        break;
        case '*':
            return d1*d2;
        break;
        case '/':
            return d1/d2;
        break;
        default:
            simple_error("Please enter a valid operator.");
            break;
    }
}

//Problem 3

/*
void problem3() {
enum Gender{ male, female, other};
Gender friend_gender = other;
char in_gender;
string friend_name;
cout << "Enter your friend's name followed by gender (m = male, f = female).";
cin >> friend_name;
cin >> in_gender;

switch(in_gender){
    case: 'm':
        cout <<
        break;
}
*/

//Problem 4
//Difference between strcmp, compare, and == for strings.
void ConvertNum (){
    string s, q;
    cout << "Write out two digits in words, from zero to four.";
    cin >> s >> q;
    if (s == "zero"){
        cout << 0 << "\n";
    } else  if (s.compare("one")){
        cout << 1 << "\n";
    } else  if (s.compare("two")){
        cout << 2 << "\n";
    } else  if (s.compare("three")){
        cout << 3 << "\n";
    } else  if (s.compare("four")){
        cout << 4 << "\n";
    } else {
        cout << "not a number I know.";
    }

    if (q == "zero"){
        cout << 0 << "\n";
    } else  if (q.compare("one")==true){
        cout << 1 << "\n";
    } else  if (q.compare("two")==true){
        cout << 2 << "\n";
    } else  if (q.compare("three")==true){
        cout << 3 << "\n";
    } else  if (q.compare("four")==true){
        cout << 4 << "\n";
    } else {
        cout << "not a number I know.";
    }
}

//Problem 7


int main(){
ConvertNum();

/*
    cout << "hello world";
    vector<int> v;
    for (int i; cin>>i;) {
        v.push_back(i);
        if (i == 100) {
            break;
        }
    }

    for (int j = 0; j<v.size(); ++j){
        cout << v[j] << "\n";
    }
    cout << "you have completed the vector. Please now enter a double: \n";
    cout << some_function();
*/
}

/*
try {

   string name;
   cin >> name;
   cout << "Hello " << name << "!\n";
   cout << "test";

   cout << area(9 / 10, 10);
} catch (Bad_area){
           cout << "Sorry, bad argument!";
}
*/

