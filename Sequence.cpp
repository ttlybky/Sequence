#include<Sequence.h>
#include<stdafx.h>
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

Sequence::Sequence(string filename)

{
char filename1=filename;
return 0;

}
Sequence::length()
{
  string line;
  ifstream openfile(filename1);
  if(!openfile)
  {cout<<filename1<<"could not be opened.\n";
  system("pause");
  return -1;
  }
  while(!openfile.eof())
  {
   getline(openfile,line)
   cout<<line<<endl;
  }
  openfile.close();
 
return 0;
}
Sequence::numberOf(char base)
{
return 0;
}
Sequence::longestConsecutive()
{
return 0;
}
Sequence::longestRepeated()
{
return 0;
}
