#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream file_input;
    file_input.open("names.txt");

    if(!file_input.is_open()){
        cout << "File Not Found" << endl;
    }else{
        string text="Jayne Murphy$47 Jones Circle$Almond, NC 28702\n$Bobbie Smith$ 217 Halifax Drive$Canton, NC 28716\n$Bill Hammet$PO Box 121$ Springfield, NC 28357\n$";
        file_input << text;
    }

    file_input.close();

    ifstream file_output;
    file_output.open("names.txt");

    if(!file_output.is_open()){
        cout << "File Not Found" << endl;
    }else{
        char cha;
        while(file_output >> cha){
            if (cha == '$'){
                cout << endl;
            }else{
                cout << cha;
            }
        }
    }

    file_output.close();
}