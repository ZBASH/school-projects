#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  int value;
  int bitValue[3] = {0,0,0};

  cout << "Please enter a number 0-7 to convert to binary" << endl;

  cin >> value;

  cout << "Now converting " << value << endl;

  if((value & 0b001) != 0) {
    bitValue[0] = 1;
  }
  if((value & 0b010) != 0) {
    bitValue[1] = 1;
  }

  if((value & 0b100) != 0) {
    bitValue[2] = 1;
  }

  cout << "The resut is: " << bitValue[2] << bitValue[1] << bitValue[0] << endl;

  return 0;

}

