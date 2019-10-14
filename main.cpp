//Author: Tommy Luo
#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main()
{
  vector <string> list; //vector of strings
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
    
       list.push_back(itemName);
    }
  }while(!(input == 'Q' || input == 'q'));
  
  if((input == 'Q' || input == 'q') && (list.size() != 0)) {
    cout << "==ITEMS TO BUY==" << endl;
  
    int items;
    for(items = 0; items < list.size(); items++) {
        int itemNums = items + 1;
        cout << itemNums << " " << list[items] << endl;
    }
  }
  else {
    cout << "No items to buy!" << endl;
  }
  
  return 0;
}
