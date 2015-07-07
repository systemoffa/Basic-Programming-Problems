//  Text to Morse Translator
//
//  Created by Benjamin Sullivan on 6/22/15.
//  Copyright (c) 2015 Benjamin Sullivan. All rights reserved.

#include <iostream>
#include <string>
#include <map>

using namespace std;

//Creates the Morse class that holds a single char that is mapped to a string
class Morse{
    map<char,string> morseMap;
    
public:
    Morse(){
    //Letters
        morseMap['a'] = ".-";   morseMap['A'] = ".-";
        morseMap['b'] = "-..."; morseMap['B'] = "-...";
        morseMap['c'] = "-.-."; morseMap['C'] = "-.-.";
        morseMap['d'] = "-..";  morseMap['D'] = "-..";
        morseMap['e'] = ".";    morseMap['E'] = ".";
        morseMap['f'] = "..-."; morseMap['F'] = "..-.";
        morseMap['g'] = "--.";  morseMap['G'] = "--.";
        morseMap['h'] = "...."; morseMap['H'] = "....";
        morseMap['i'] = "..";   morseMap['I'] = "..";
        morseMap['j'] = ".---"; morseMap['J'] = ".---";
        morseMap['k'] = "-.-";  morseMap['K'] = "-.-";
        morseMap['l'] = ".-.."; morseMap['L'] = ".-..";
        morseMap['m'] = "--";   morseMap['M'] = "--";
        morseMap['n'] = "-.";   morseMap['N'] = "-.";
        morseMap['o'] = "---";  morseMap['O'] = "---";
        morseMap['p'] = ".--."; morseMap['P'] = ".--.";
        morseMap['q'] = "--.-"; morseMap['Q'] = "--.-";
        morseMap['r'] = ".-.";  morseMap['R'] = ".-.";
        morseMap['s'] = "...";  morseMap['S'] = "...";
        morseMap['t'] = "-";    morseMap['T'] = "-";
        morseMap['u'] = "..-";  morseMap['U'] = "..-";
        morseMap['v'] = "...-"; morseMap['V'] = "...-";
        morseMap['w'] = ".--";  morseMap['W'] = ".--";
        morseMap['x'] = "-..-"; morseMap['X'] = "-..-";
        morseMap['y'] = "-.--"; morseMap['Y'] = "-.--";
        morseMap['z'] = "--.."; morseMap['Z'] = "--..";
    //Numbers
        morseMap['0'] = "-----";
        morseMap['1'] = ".----";
        morseMap['2'] = "..---";
        morseMap['3'] = "...--";
        morseMap['4'] = "....-";
        morseMap['5'] = ".....";
        morseMap['6'] = "-....";
        morseMap['7'] = "--...";
        morseMap['8'] = "---..";
        morseMap['9'] = "----.";
    //Non-Alpha or Numerical chars
        morseMap[' '] = "\t";
        morseMap['.'] = ".-.-.-";
        morseMap[','] = "--..--";
        morseMap[':'] = "---...";
        morseMap['?'] = "..--..";
        morseMap['\''] = ".----.";
        morseMap['-'] = "-....-";
        morseMap['/'] = "-..-.";
        morseMap['('] = "-.--.-";   morseMap[')'] = "-.--.-";
        morseMap['['] = "-.--.-";   morseMap[']'] = "-.--.-";
        morseMap['@'] = ".--.-.";
        morseMap['='] = "-...-";
    }
    
    string toMorse(char c){
        return morseMap[c];
    }
};

static Morse morse;

int main(int argc, const char * argv[]) {
    while(true){
        string input = "";
        string output = "";
        
        cout << "Input a string to translate.\n";
        getline(cin, input);
        
        for(unsigned i = 0; i < input.size(); i++){
            output = output + morse.toMorse(input.at(i));
        }
        
        cout << output;
        cout << "\n";
    }
}
