#include <iomanip>
#include <iostream>
using namespace std;

//initialize all non-main functions in main file
void getinput(int &n1, int &n2);
void getinput(float &f1, float &f2);
void swapTwoValues(int &n1, int &n2);
void swapTwoValues(float &f1, float &f2);
int main() {

//defining variables
  int num1, num2;
  float fnum1, fnum2;
  getinput(num1, num2);
  cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5)
       << endl;
  swapTwoValues(num1, num2);
  cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5)
       << endl;

//setting up inputs
  getinput(fnum1, fnum2);
  cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
  swapTwoValues(fnum1, fnum2);
  cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

//asking user for input and receiving 
void getinput(int &n1, int &n2) {
  cout << "enter first var:" << endl;
  cin >> n1;
  cout << "enter first var:" << endl;
  cin >> n2;
}

void getinput(float &f1, float &f2) {
  cout << "enter first var:" << endl;
  cin >> f1;
  cout << "enter first var:" << endl;
  cin >> f2;
}

//setting up swaptwovalues function
void swapTwoValues(int &n1, int &n2) {
  int temp = 0;
  temp = n1;
  // cout << temp << endl;
  n1 = n2;
  // cout << n1 << endl;
  n2 = temp;
  // cout << n2;
}

void swapTwoValues(float &f1, float &f2) {
  float temp = 0;
  temp = f1;
  // cout << temp << endl;
  f1 = f2;
  // cout << n1 << endl;
  f2 = temp;
  // cout << n2;
}