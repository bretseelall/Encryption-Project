#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int cypherChoice, key, key2, counter = 0;
    string plainText;
    vector<int> decrypt;

    cout << "Choose one of the Following options:";
    cout << "\n1 = Encryption ";
    cout << "\n2 = Decryption \n\n";
    cout << "Choice: ";
    cin >> cypherChoice;

    cin.clear();
    cout << "\nEnter keys: ";
    cin >> key >> key2;

    switch(cypherChoice)
    {
        case 1:
            cin.ignore();
            cout << "\nEnter text to encrypt:\n";
            getline(cin, plainText);

            for(int i = 0; i < plainText.length(); i++){
               cout << (int)plainText[i] * key + key2 << " ";
            }
        break;

        case 2:
            cin.ignore();
            cout << "\nEnter encrypted string:\n";

            while(counter != -1){
                    cin >> counter;
                    if(counter != -1){
                        decrypt.push_back(counter);
                    }
                }

            cout << "\nDecripted string is:\n";

            for(int i = 0; i < decrypt.size(); i++){
                cout << (char)((decrypt[i]- key2) / key);
            }
        break;

        default:
            cout << "\nInvalid Input!!!";
    }
}
