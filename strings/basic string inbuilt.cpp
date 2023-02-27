#include <iostream>
#include <string>
using namespace std;

void convertIntoUpperCase(string arr) {
  int n = arr.length();

  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] - 'a' + 'A';
  }

  cout << arr;
}

int main() {

  // string create
  string str;
  // input
  cin >> str;
  getline(cin, str);
  // print
  cout << str;

  cout << "length: " << str.length() << endl;
  cout << "isEmpty: " << str.empty() << endl;
  str.push_back('A');
  cout << str << endl;
  str.pop_back();
  cout << str << endl;
  cout << str.substr(1, 3) << endl;
  cout << str << endl;

  string a = "Love";
  string b = "love";

  if (a.compare(b) == 0) {
    cout << " a and b are exactly same strings" << endl;
  } else {
    cout << "a and b are not same" << endl;
  }

  string x = "bbbb";
  string y = "bbbba";

  cout << x.compare(y) << endl;

  string sentence = "hello Jee kaise ho saare";
  string target = "hello";

  cout << sentence.find(target) << endl;
  if (sentence.find(target) == string::npos) {
    cout << "Not Found" << endl;
  }

  string str2 = "This is my First Message";
  string word = "Babbar";

  str2.replace(11, 5, "Second");
  cout << str << endl;

  string str1 = "ABCDEFGHIJKLMNOPQRST";
  str1.erase(10, 10);
  cout << str;

  convertIntoUpperCase("asasas");

  return 0;
}