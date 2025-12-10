#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int Pid[100];
string Pname[100];
int Pprice[100];
int Pqty[100];
int count = 0;

void loadProducts() {
    ifstream file("miniShopManagment.txt");
    if (!file) {
        cout << "File not found. Starting fresh...\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string id, name, price, qty;

        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, price, ',');
        getline(ss, qty, ',');

        Pid[count] = stoi(id);
        Pname[count] = name;
        Pprice[count] = stoi(price);
        Pqty[count] = stoi(qty);
        count++;
    }
    file.close();
}

void displayProducts() {
    cout << "\n====== Products ======\n";
    for (int i = 0; i < count; i++) {
        cout << Pid[i] << "\t" << Pname[i] << "\t"
             << Pprice[i] << "\t" << Pqty[i] << endl;
    }
}

void generateBill() {
    int id;
    cout << "Enter product ID: ";
    cin >> id;

    int index = -1;
    for (int i = 0; i < count; i++) {
        if (Pid[i] == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Product not found!\n";
        return;
    }

    int Quantity;
    cout << "Enter quantity: ";
    cin >> Quantity;

    if (Quantity > Pqty[index]) {
        cout << "Not enough stock!\n";
        return;
    }

    int total = Quantity * Pprice[index];
    Pqty[index] -= Quantity;

    cout << "\nProduct: " << Pname[index];
    cout << "\nRemaining Stock: " << Pqty[index];
    cout << "\nTotal Bill: " << total << endl;
}

void addProduct() {
    cout << "Enter Product ID: ";
    cin >> Pid[count];
    cout << "Enter Name: ";
    cin >> Pname[count];
    cout << "Enter Price: ";
    cin >> Pprice[count];
    cout << "Enter Quantity: ";
    cin >> Pqty[count];
    count++;

    cout << "Product added successfully!\n";
}

void saveProduct() {
    ofstream file("miniShopManagment.txt");

    for (int i = 0; i < count; i++) {
        file << Pid[i] << "," << Pname[i] << "," 
             << Pprice[i] << "," << Pqty[i] << endl;
    }

    file.close();
    cout << "Data saved successfully!\n";
}

int main() {
    loadProducts();

    int Choice;
    do {
        cout << "\n====== MENU ======\n";
        cout << "1. Display Products\n";
        cout << "2. Add Product\n";
        cout << "3. Generate Bill\n";
        cout << "4. Save Products\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> Choice;

        switch (Choice) {
        case 1: displayProducts(); break;
        case 2: addProduct(); break;
        case 3: generateBill(); break;
        case 4: saveProduct(); break;
        case 5: cout << "Exiting...\n"; break;
        default: cout << "Invalid option!\n";
        }

    } while (Choice != 5);

    return 0;
}
