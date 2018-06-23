#ifndef Sequence_H
#define Sequence_H

#include<iostream>
#include<string>

using namespace std;
class Sequence
{public:
   Sequence(string filename);
   int length();
   int numberOf(char base);
   string longestConsecutive();
   string longestRepeated();


}
