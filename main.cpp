#include "leveshtein.h"
#include "dice.h"
#include <iostream>
#include <string.h>
#include <chrono>
#include <fstream>

using namespace std;
using namespace std::chrono;

int main(void)
{
  string s1,s2;
  ofstream opf("inputs.txt",ios_base::app);
  float dice;
  int lev;
  cout << "Enter string 1: ";
  getline(cin, s1);
  opf <<endl<<endl << s1 << endl;
  cout << endl << "Enter string 2: ";
  getline(cin, s2);
  opf << s2 << endl;

  auto start = std::chrono::high_resolution_clock::now();
  dice = dice_coefficient(s1,s2);
  auto stop = std::chrono::high_resolution_clock::now();
  auto dur = std::chrono::duration_cast<microseconds>(stop - start);
  cout << endl << "Dice = " << dice << endl;
  cout << "Duration = " << dur.count() << endl;
  opf << endl << "dice value :" << dice << endl << "duration : " << dur.count() << endl;

  start = std::chrono::high_resolution_clock::now();
  lev = dist(s1, s1.length(), s2, s2.length());
  stop = std::chrono::high_resolution_clock::now();
  dur = std::chrono::duration_cast<microseconds>(stop - start);
  cout << endl << "Leveshtein value = " << lev << endl;
  cout << "Duration = " << dur.count() << endl;
  opf << endl << "leveshtein value : " << lev << endl  << "duration : " << dur.count() << endl <<"____________________________________________________________";

  return 0;
}
