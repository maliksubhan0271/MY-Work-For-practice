//Write a program for a photography printing kiosk. Read N print orders and number of photos in each order. Charge 30 per photo. If number of photos > 75 in one order, apply 15% discount on that order’s bill. Print bill per order and total revenue. Use variables, loops, IO and if
#include<iostream>
using namespace std;
int main()
{
    int n,photos,totalRevenue=0;
    cout << "Enter a number of order: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << "Enter a photos of the order "<<i<<":";
        cin >>photos;
        int bill;
            bill = photos*30;
            cout << "The bill of this order "<<i<<"is: "<<bill<<endl;
        if(photos>75){
            bill = bill - (bill*0.15);
            cout << "We will 15 percent discount on this order "<<i<<"bcz you give a photos abvoe 75: "<<bill<<endl;
        }
             totalRevenue = totalRevenue +bill;
    }
    cout << "Total revenue is: "<<totalRevenue<<endl;
}