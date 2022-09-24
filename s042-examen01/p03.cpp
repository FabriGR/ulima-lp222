#include <iostream>
using namespace std;

const char HIDE_CHAR = '*';

void hideText(string &text, int k){
    for(int i = text.size()-1; i > text.size()-1-k; i--){
        text[i] = HIDE_CHAR;
    }
}

int main(){
    string text;
    int k;
    getline(cin, text);
    cin >> k;
    cout << "Cadena leida: " << text << endl;
    hideText(text, k);
    cout << "Cadena transformada: " << text << endl;
}