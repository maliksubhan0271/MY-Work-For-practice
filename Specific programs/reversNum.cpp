#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num = 123, reverse=0;
    cout<<"Befor revering"<<endl;
    
    cout<<num<<endl;

    while(num>0){
        int digit = num % 10;
         reverse = reverse * 10 + digit;
         num = num/10;
    }
 cout << reverse;
 return 0;

}
// step 1:
// digit = num % 10;   ya last digit nekla kar det ha...
// example num=12345
// 12345 % 10 = Digit = 5 (Last digit)

// step 2:
// reverse = reverse * 10 + digit;
// Example: start ma Reverse =0... digit =5
// reverse = 0 * 10 + 5 → 5
// Next digit = 4
// reverse = 5 * 10 + 4 → 54
// Next digit = 3
// reverse = 54 * 10 + 3 → 543
// Aise aage chalta rehta hai.

// step 3:
//  num = num / 10;
// last digit remove kar deta ha 
// Example:
// num = 12345
// 12345 / 10 → 1234
// Phir
// 1234 / 10 → 123
// Phir
// 123 / 10 → 12
// Phir
// 12 / 10 → 1
// Phir
// 1 / 10 → 0
// Jab num = 0 ho jaye → loop khatam


