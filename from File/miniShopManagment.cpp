#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
int Pid[100];
string Pname[100];
int Pprice[100];
int Pqty[100];
int count=0;
    void loadProducts(){
        ifstream file("miniShopManagment.txt");
        string line;
        while(getline(file,line)){

            stringstream row(line);
            string id,name,price,qty;
            getline(row,id, ',');
            Pid[count] = stoi(id);

            getline(row, name, ',');
            Pname[count] = name;

            getline(row, price, ',');
            Pprice[count] = stoi(price);

            getline(row, qty, ',');
            Pqty[count] = stoi(qty);

            count++;

        }
        
        file.close();
    }
        void displayProducts(){
            cout << "\t====== Products ======\n";
            for(int i=0; i<count; i++){
                cout <<"\t"<<Pid[i]<<"\t"<<Pname[i]<<"\t"<<Pprice[i]<<"\t"<<Pqty[i]<<"\n";
            }
            cout << "\t==============\n";
        }
        void genrateBill(){
            int id;
            cout << "Enter a Id: ";
            cin>> id;
            int index=-1;
            for(int i=0; i<count; i++){
                if(Pid[i] == id){
                    index =i;
                }
            }
            if(index==-1){
                cout << "product Not found!"<<endl;
                return;
            }
            int Quantity;
            cout << "Enter a quantity: ";
            cin>>Quantity;
            if(Quantity>Pqty[index]){
                cout << "Not Enough stock!"<<endl;
            }
            int total = Quantity * Pprice[index];
            Quantity -= Pqty[index];

            cout << "Product Name: "<<Pname[index]<<endl;
            cout << "Product Quantity: "<<Quantity<<endl;
            cout << "Total Bill: "<<total<<endl;
        }
        void addProduct(){
            cout<< "Enter a Product id: ";
            cin >> Pid[count];
            cout << "Enter a product name: ";
            cin >> Pname[count];
            cout << "Enter a product price: ";
            cin >> Pprice[count];
            cout << "Enter a product Quantity: ";
            cin >> Pqty[count];
            count++;
            cout << "Product save sucessfully:";
        }
        void saveProduct(){
            ofstream file("miniShopManagment.txt");

            for(int i=0; i<count; i++){
                file<<Pid[i]<<","<<Pname[i]<<","<<Pprice[i]<<","<<Pqty[i]<<endl;
            }
            file.close();
        }
    
int main() {
    loadProducts();
    int Choice;
    do{

        cout << "\n====== MENU ======\n";
        cout << "1. Display product\n";
        cout << "2. Add producct\n";
        cout << "3. Genrate bill\n";
        cout << "4. Save product\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> Choice;

        switch(Choice){
            case 1:
            displayProducts();
            break;
            case 2:
            addProduct();
            break;
            case 3:
            genrateBill();
            break;
            case 4:
            saveProduct();
            break;
            case 5:
            cout << "Exiting...\n";
            break;
            default:
            cout << "Invalid Choice\n";
    }

}
 while(Choice!=5);

    return 0;
}
