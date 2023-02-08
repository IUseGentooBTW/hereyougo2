#include <iostream>
using namespace std;
int main()
{
    cout << "Please enter budget: ";
    int budget;
    cin >> budget;
    if(budget >= 5){
    cout << "1.egg $5" << endl;
    cout << " 2.water $3" << endl;
    cout << "What will you be buying today" << endl;
    int selection;
    cin >> selection;
    if(selection == 1 && budget >= 5){
        cout << "we have the finest eggs in the land\n Thank you for your sale have a nice day";
    }else if(selection == 2 && budget >= 3){
        cout << "we have the healthiest drinking water in the world you will not regret your transaction";

    }else{
        cout << "invalid option";
    }
    }



    else{
        cout << "You are to broke";
    }

    return 0;
}
