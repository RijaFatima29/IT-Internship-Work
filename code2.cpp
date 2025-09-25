#include <iostream>
using namespace std;

int main(){
   int age = 25;
   char letter = 'R';
   string name = "Rija Fatima";
   bool isSafe = true;
   cout<<"age= " << age <<endl <<"character= "<< letter << endl << "Name= " << name << endl << "Bool value is: "<< isSafe <<endl;
   cout<<"size of integer age is: "<< sizeof(age) << endl <<"size of char letter is: "<< sizeof(letter) <<endl <<"size of string name is: "<< sizeof(name);
   return 0;
}