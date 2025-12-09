#include<iostream>
using namespace std;
int main()
{
    int array[10],count=0;
    for(int i=0; i<10; i++){
        cout<< "Enter a number"<<i+1<<":";
        cin >> array[i];
    }


    for(int i=0; i<10; i++){
        if(array[i]%2==0){
            cout<<"Even number is:" << array[i]<< endl;
            count++;
        }
    }
    cout << "Total even  number is: "<<count<<endl<<endl<<endl;

     count=0;
    for(int i=0; i<10; i++){
        if(array[i]%2==1){
            cout<<"odd number is:" << array[i]<<endl;
            count++;
        }
    }
    cout << "Total odd  number is: "<<count<<endl<<endl<<endl;

   int num;
   bool found;
   cout<< "Enter a number: ";
   cin >> num;
   found = false;
   for(int i=0; i<10;i++){
        if(num==array[i]){
            found=true;
        }
   }
        if(found==true){
            cout << "Number is found!"<<endl<<endl;
        }
        else{ 
            cout << "Number is not found!"<<endl<< endl;
        }
    
    int max= array[0];
    for(int i=0; i<10;i++){
        if(array[i]>max)
            max=array[i];
    }    
    cout << "Max number is "<<max<<":"<<endl<<endl;


    int min= array[0];
    for(int i=0; i<10;i++){
        if(array[i]<min)
            min=array[i];
    }    
    cout << "Min number is "<<min<<":"<<endl;
         
}