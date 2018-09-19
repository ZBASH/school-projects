/* This program was created by Zack Labaschin 
   It is used to demonstrate converting a decimal vale into a binary value
   The method to convert the int value is bitwise operations using masking
   Please enjoy!
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  int value;
  int bitValue[3] = {0,0,0};

  cout << "Please enter a number 0-7 to convert to binary" << endl;

  cin >> value;

  cout << "Now converting " << value << endl;

  // the masking and updating of the array
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

