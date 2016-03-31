#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "BigIntegerLibrary.hh"

BigInteger checkReverse(BigInteger num) { /*Codigo sacado de internet*/
    BigInteger reverse = 0;
    while(num != 0) {
        BigInteger remainder = num%10;
        reverse = reverse*10 + remainder;
        num/=10;
    }
    return reverse;
}

int checkNum(BigInteger num){
  int ans = 0, i;
  BigInteger reverseNum, addition, additionReverse;
  reverseNum = checkReverse(num);
  if (num == reverseNum) {
    ans = 1;
  } else {
    addition = num + reverseNum;
    for (i = 0; i >= 30 || additionReverse != reverseNum; i++) {
      additionReverse = checkReverse(addition);
      if (additionReverse == addition) {
        ans = 2;
        break;
      }else{
        if (i == 30) {
          ans = 3;
          break;
        } else {
          addition = addition + additionReverse;
        }
      }
    }
  }
  return ans;
}

int main (){
  int low, sum, upper, lych = 0, nonLych = 0, natural = 0, i = 0, reverse, numCheck, range = 0;
  cout << "What is the lower bound of numbers to concider: ";
  cin >> low;
  cout << "What is the upper bound of numbers to concider: ";
  cin >> upper;
  if (low<=upper) {
    cout << "Continue" << endl;
    sum = low;
    for (i = low; i <= upper; i++) {
      range++;
      sum = checkNum(i);
      if (sum == 1) {
        natural++;
      } else {
        if (sum == 2) {
          nonLych++;
        } else {
          if (sum == 3) {
            lych++;
          } else {
            cout << "There was an error in the code" << endl;
          }
        }
      }
    }
    cout << "The range of numbers analysed is: " << range << endl;
    cout << "The number of natural palindromes is: " << natural << endl;
    cout << "The number of non-Lycherels encountered is: " << nonLych << endl;
    cout << "The number of Lycherel number candidates is: " << lych << endl;
    }else {
    cout << "The lower number was higher than the upper number, please try again.";
  }
}
