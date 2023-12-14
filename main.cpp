
#include "iostream"
#include "FileReader.h"
#include "fstream"
#include "string"
using namespace std;
int main(){
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



