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
  string itemName;

  do {

    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
   if(!list.empty()) {
    cout << "\n (D)elete last item";
    }

    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";

    cin>>input;

    if(input == 'A' || input == 'a') {
       cout << "What is the item?" << endl;
       cin >> itemName;
       list.push_back(itemName);
    }

    if(!list.empty()) {
         if(input == 'D' || input == 'd') {
             cout << list.at(list.size() - 1) << 
             " was deleted from the list." << endl;
            list.pop_back();
        }   
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
