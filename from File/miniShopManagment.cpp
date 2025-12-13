#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
int Pid[100];
string Pname[100];
int Pprice[100];
int Pqty[100];
int S_index[100];  // Search index
int Pcount=0; // Counter for product
int S_count=0;  //For Select Product
int T_qty[100]; //For tempory Quantity
string H_id, H_name,H_price,H_qty;  //for header line 
 int index=-1, Quantity, id, subTotal, price;
    void loadProducts(){
        ifstream file("miniShopManagment.txt");
        string line;

        getline(file,line);
            stringstream row1(line);
            getline(row1,H_id , ',');
            getline(row1, H_name, ',');
            getline(row1, H_price, ',');
            getline(row1, H_qty, ',');

        while(getline(file,line)){

            stringstream row(line);
            string id,name,price,qty;
            getline(row,id, ',');
            Pid[Pcount] = stoi(id);

            getline(row, name, ',');
            Pname[Pcount] = name;

            getline(row, price, ',');
            Pprice[Pcount] = stoi(price);

            getline(row, qty, ',');
            Pqty[Pcount] = stoi(qty);

            Pcount++;

        }
        
        file.close();
    }
        void displayProducts(){
            cout << "\t====== Avaialbe Products ======\n";
            cout <<"\t"<<H_id<<"\t"<<H_name<<"\t"<<H_price<<"\t"<<H_qty<<endl;
            for(int i=0; i<Pcount; i++){
                cout <<"\t"<<Pid[i]<<"\t"<<Pname[i]<<"\t"<<Pprice[i]<<"\t"<<Pqty[i]<<"\n";
            }
            cout << "\t==============\n";
        }
      void slectProduct(){
                displayProducts();
                cout<< "====== Select Products ======"<<endl;
                bool Choice;
                 S_count=0;
                
            do{
                cout << "Enter a ID: ";
                cin >>id;

            for(int i=0; i<=Pcount; i++ ){
                if(Pid[i] == id){
                 index =i;
                }
            }  
            if(index == -1){
                cout << "Product is not Found!"<<endl;
            }

            cout << "Enter a quantity: ";
            cin >>Quantity;
            if(Quantity>Pqty[index]){
                cout << "Quantity not enough!"<<endl;
            }  
            
            S_index[S_count] = index;
             T_qty[S_count] = Quantity;
            S_count++;
            cout << "IF you want More Product Press 1 ohter wise 0: ";
            cin >> Choice;
        }while(Choice == true);
        cout << "Now Pree 3 and Genrate the bill!"<<endl;
            cout << "============="<<endl;
      }

        void genrateBill(){
        cout << "====== Genrated Bail ======"<<endl;
            for (int i=0; i<S_count; i++){
                index = S_index[i];
                Quantity = T_qty[i];
                int total = Quantity * Pprice[index];
                Pqty[index] -= Quantity;

                cout << "Product Name: "<<Pname[index]<<endl;
                cout << "Product Quantity: "<<Quantity<<endl;
                cout << "Total Bill per item: "<<total<<endl;
                 subTotal += total;
            }
            cout << "Total Bill of all Product: "<<subTotal<<endl;
                cout << "==========="<<endl;
        }
    
        void addAndsaveProduct(){
             displayProducts();
            ofstream file("miniShopManagment.txt");

            cout<< "Enter a Product id: ";
            cin >> Pid[Pcount];
            cout << "Enter a product name: ";
            cin >> Pname[Pcount];
            cout << "Enter a product price: ";
            cin >> Pprice[Pcount];
            cout << "Enter a product Quantity: ";
            cin >> Pqty[Pcount];
            Pcount++;
          file<<H_id<<","<<H_name<<","<<H_price<<","<<H_qty<<endl;
            for(int i=0; i<Pcount; i++){
                file<<Pid[i]<<","<<Pname[i]<<","<<Pprice[i]<<","<<Pqty[i]<<endl;
            }
              cout << "Product save sucessfully:";
            file.close();
        }
    
 int main() {
    int Choice;
    loadProducts();
    do{

        cout << "\n====== MENU ======\n";
        cout << "1. Display product\n";
        cout << "2. Select Product\n";
        cout << "3. Genrate bill\n";
        cout << "4. Add and Save product\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> Choice;

        switch(Choice){
            case 1:
            displayProducts();
            break;
            case 2:
            slectProduct();
            break;
            case 3:
            genrateBill();
            break;
            case 4:
            addAndsaveProduct();
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
