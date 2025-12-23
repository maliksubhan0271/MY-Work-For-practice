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

            //varible declear
string H_id, H_name,H_price,H_qty;  //for header line 
int index=-1, Quantity, id, subTotal, price;

            //Function start
    void loadProducts(){    //Funtion for load product from file...
        ifstream file("C:/miniShopManagment/Book.csv");     //file open
        string line;

        getline(file,line);     // First line read
            stringstream row1(line);
            getline(row1,H_id , ',');
            getline(row1, H_name, ',');
            getline(row1, H_price, ',');
            getline(row1, H_qty, ',');

        while(getline(file,line)){     // Loop for item

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
        
        file.close();  // File close
    }
        void displayProducts(){     // Function for show display Product

            cout << "\t====== Avaialbe Products ======\n";
            cout <<"\t"<<H_id<<"\t"<<H_name<<"\t"<<H_price<<"\t"<<H_qty<<endl;   // For header

            for(int i=0; i<Pcount; i++){    // Loop for show item
                cout <<"\t"<<Pid[i]<<"\t"<<Pname[i]<<"\t"<<Pprice[i]<<"\t"<<Pqty[i]<<"\n";
            }

            cout << "\t==============\n";
        }

      void slectProduct(){      // Function for Select product

                displayProducts();    // for show product
                cout<< "====== Select Products ======"<<endl;
                bool Choice;
                 S_count=0;
                
            do{     // loop ask from user that anything else
                cout << "Enter a ID: ";
                cin >>id;

            for(int i=0; i<=Pcount; i++ ){     // loop for searching item
                if(Pid[i] == id){
                 index =i;
                }
            }  

            if(index == -1){
                cout << "Product is not Found!"<<endl;
            }

            cout << "Enter a quantity: ";
            cin >>Quantity;

            if(Quantity>Pqty[index]){       // For check quantity
                cout << "Quantity not enough!"<<endl;
            }  
            
            S_index[S_count] = index;   // Store index value per item...
             T_qty[S_count] = Quantity; // Store quantity per item...
            S_count++;

            cout << "IF you want More Product Press 1 ohter wise 0: ";  //Ask from user...
            cin >> Choice;

        }while(Choice == true);    // loop repeat when user tell yes...

        cout << "Now Pree 3 and Genrate the bill!"<<endl;
            cout << "============="<<endl;
      }

        void genrateBill(){  // Function for bill
        cout << "====== Genrated Bail ======"<<endl;

            for (int i=0; i<S_count; i++){  // loop Total bill per item..
                index = S_index[i];
                Quantity = T_qty[i];

                int total = Quantity * Pprice[index];
                Pqty[index] -= Quantity;

                cout << "Product Name: "<<Pname[index]<<endl;
                cout << "Product Quantity: "<<Quantity<<endl;
                cout << "Total Bill per item: "<<total<<endl;

                 subTotal += total;
            }

            cout << "Total Bill of all Product: "<<subTotal<<endl;  // For TOtal all product...
                cout << "==========="<<endl;
        }
    
        void addAndsaveProduct(){   //Function for add and save product
             displayProducts();     //For Show already aviable item

            ofstream file("C:/miniShopManagment/Book.csv");  //file open..

            cout<< "Enter a Product id: ";
            cin >> Pid[Pcount];
            cout << "Enter a product name: ";
            cin >> Pname[Pcount];
            cout << "Enter a product price: ";
            cin >> Pprice[Pcount];
            cout << "Enter a product Quantity: ";
            cin >> Pqty[Pcount];
            Pcount++;

          file<<H_id<<","<<H_name<<","<<H_price<<","<<H_qty<<endl;  // For header Line

            for(int i=0; i<Pcount; i++){        // For item save in file
                file<<Pid[i]<<","<<Pname[i]<<","<<Pprice[i]<<","<<Pqty[i]<<endl;
            }

              cout << "Product save sucessfully:";
            file.close();       //File close...
        }
    
 int main() {       //Main function start

    int Choice;
    loadProducts();

    do{     //Loop for Show MENU..

        cout << "\n====== MENU ======\n";
        cout << "1. Display product\n";
        cout << "2. Select Product\n";
        cout << "3. Genrate bill\n";
        cout << "4. Add and Save product\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> Choice;

        switch(Choice){     //For Call Function
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
 while(Choice!=5);  //Loop end when user want exist...

    return 0;
 }
