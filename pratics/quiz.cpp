#include <iostream>
using namespace std;
int main() {
    int n, dailyUsageUnits,totalUsage=0;
    cout << "Enter a days: ";
    cin >> n;
      
        for( int i=0; i<n; i++){
              cout<< "Enter a daliy water uasge units: ";
            cin >> dailyUsageUnits;
            totalUsage = totalUsage + dailyUsageUnits;
        }
        cout << "Total daily usage: "<< totalUsage<<endl;
       
        int bill=0, extra=0;
        if(totalUsage<=25){
            bill = totalUsage * 30;
            cout << "Bill is: "<< bill <<endl;
        }
        else{
            extra = totalUsage - 25;
            bill = (25 * 30) + (extra * 45);
            cout << "Bill is: "<< bill<<endl;
        }
    return 0;
}
