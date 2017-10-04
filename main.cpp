#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <vector <string> > wordGrid;
  vector <string> aQ;
  /*
     do not edit this space

     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */

  //PUT YOUR CODE BELOW THIS LINE
  //that prints each element of the matrix in the
  //following format:
  //Row _ Column _ is _
  //the first and second blanks should be replaced with the coordinates
  //of the element's row and column and the third blank should be replaced
  //with the value of that element

aQ.push_back("car");
aQ.push_back("man");
aQ.push_back("laptop");
aQ.push_back("pin");
aQ.push_back("book");

wordGrid.push_back(aQ);

aQ.clear();

aQ.push_back("read");
aQ.push_back("write");
aQ.push_back("sleep");
aQ.push_back("open");

wordGrid.push_back(aQ);

for(int r=0; r < wordGrid.size();r++) // r= row and c= column
{
for(int c=0; c < aQ.size();c++)
{
cout<<"Row "<<r<<"Column "<<c<<"is  "<<wordGrid[r][c]<<endl;
}
cout<<endl;





 return 0;
}




