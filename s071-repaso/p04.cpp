#include <iostream>
#include <vector>
using namespace std;

bool find(vector<char> characters, char reference){
    bool found = false;
    for(int i = 0; i < characters.size(); i++){
        if(characters[i] == reference){
            found = true;
            break;
        }
    }
    return found;
} 

void printFrequence(string text){
    vector<char> characters;
    for(int i = 0; i < text.size(); i++){
        if(!find(characters, text[i])){
            int count = 1;
            for(int j = i + 1; j < text.size(); j++){
                if(text[i] == text[j]){
                    count++;
                }                    
            }
            cout << "Caracter: " << text[i] << ". ";
            cout << "Cantidad de apariciones: " << count << endl;
            //Para no volver a mostrar el mismo caracter
            characters.push_back(text[i]);
        }
    }
}


int main(){
    string text = "esternocleidomastoideo";
    printFrequence(text);
}