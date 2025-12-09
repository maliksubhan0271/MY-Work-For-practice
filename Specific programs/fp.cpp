#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age;
    char vote_id;
    bool vote_id;
cout << "Enter your age = "<<endl;
cin >> age;
cout << "you have a  vote_id (Y/y,N/n): ";
cin >> vote_id;
 vote_id = (vote_id == Y || vote_id == y);
if(age>=18)
{
    if( vote_id)
    {
        cout << "you are Eligible for voting"<<endl;
    }
    else
    {
        cout << "you are not Eligible for voting bcz you have not vote id"<<endl;
    }
}
    else
    {
        cout << "you are not Eligible for voting bcz your age is blow to 18"
    }
    return 0;
} 
