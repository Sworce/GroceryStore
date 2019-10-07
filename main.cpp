//Author: Tommy Luo
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;

  do {

    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if(input == 'A' || input == 'a') {
       string itemName;
       cout << "What is the item?" << endl;
       cin >> itemName;
       
       if(numItems < 5) {
           list[numItems] = itemName;
       }
       else {
         cout <<"You'll need a bigger list!" << endl;
        }      
    }
    numItems++;

  }while(!(input == 'Q' || input == 'q'));
  

  return 0;
}
