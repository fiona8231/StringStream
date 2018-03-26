#include <iostream>
#include <sstream>

using namespace std;
int main() {

// convert string to integer
string num = "45";

 //StringStream
 stringstream sobj;
 int output;

 sobj << num;
 sobj >> output;

 cout << output + 2 << endl; //47
 cout << num + "2" << endl; //452

  //convert integer to string

  cout << "Pls enter a number" << endl;

    int input;
    string output1;

    cin >> input;

    //define a integer stream object
    stringstream obj1;

    obj1 << input;
    obj1 >> output1;
    cout << "The output is indeed string: "<<output1 +"s"<< endl;


    return 0;

}