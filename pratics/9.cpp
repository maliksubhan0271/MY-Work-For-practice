#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "1. For start" << endl;
    cout << "2. for setteing" << endl;
    cout << "3. for exist" << endl;
    cout << "What's your choice: ";
    cin >> choice;
    switch (choice){
        case 1:
        cout << "Game starting...";
        break;
        case 2:
        cout << "open setting...";
        break;
        case 3:
        cout << "existing...";
        break;
        default:
        cout << "You choice incorrect key...";
        break;
    }
    return 0;
}