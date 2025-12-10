string  lines;
    ifstream file2;
    file2.open ("sentences.txt");
    while(getline(file2, lines)){
        
        file2>>lines;
    }
    cout<< lines<<endl;
    file2.close();
    cout << "File 