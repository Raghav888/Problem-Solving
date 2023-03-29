// gcd of rwo number shortcut method : Euclid's Algo
//  gcd(a,b)=> if a>b=> gcd(a-b,b)..do this operation continously until a
//  or b becomes zero. 
// gcd(a,b)=> if b>a => gcd(b-a,a)..do this operation
//  continously until  a or b becomes zero.
// ex: gcd(72,24)=> gcd(72-24,24)=>
// gcd(48,24)=>gcd(48-24,24)=>gcd(24,24)=>gcd(24-24,24)=>gcd(0,24)=> gcd is 24.

#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if (a == 0) {
    return b;
  }

  if (b == 0) {
    return a;
  }

  while (a > 0 && b > 0) {

    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  };

  if (a > 0) {
    return a;
  }
  return b;
}

int main() {
  int a = 24;
  int b = 72;
  cout << gcd(a, b);
  return 0;
}
