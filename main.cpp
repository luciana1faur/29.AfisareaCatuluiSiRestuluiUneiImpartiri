#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int deimpartit, impartitor, cat;
  int rest;

  cout << "Compute quotient and remainder : " << endl;
  cout << "--------------------------------" << endl;

  cout << "Introduceti deimpartitul: ";
  cin >> deimpartit;
  cout << "Introduceti impartitul: ";
  cin >> impartitor;

  cat = deimpartit / impartitor;
  rest = deimpartit % impartitor;

  cout << "Catul impartirii este: " << cat << endl;
  cout << "Restul impartirii este: " << rest << endl;

  return 0;
  
}
//Compute quotient and remainder :