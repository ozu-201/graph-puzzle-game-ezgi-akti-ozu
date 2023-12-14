//
// Created by ea024716 on 12/14/2023.
//

#include "iostream"
#include "FileReader.h"
#include "fstream"
#include "string"
using namespace std;
int FileReader(){
    string line;
    fstream newFile ("dictionary.txt");
    if(newFile.is_open()){
        while(getline(newFile, line)) {
            cout << line << endl;
        }
        newFile.close();
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}

