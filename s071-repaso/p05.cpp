#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
    Precondiciones:
    - Texto en minusculas
    - Otros caracteres van a mantener su valor
*/
string transform(string text, int n){
    string ans = "";
    const int ALPHABET_LETTERS = 26;

    for(int i = 0; i < text.size(); i++){
        char original = text[i];
        char newChar = original;
        if(original >= 'a' && original <= 'z'){
            //Es posible que hayamos llegado al final del alfabeto
            newChar = 'a' + (original + n - 'a') % ALPHABET_LETTERS;
        }        
        ans += newChar;
    }
    return ans;
}

int main(){
    string text = "zola mundo";
    int n = 4;
    cout << "Texto original: " << text << endl;
    cout << "Texto convertido: " << transform(text, n) << endl;
    return 0;
}
