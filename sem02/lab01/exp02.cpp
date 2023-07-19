#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;\
    cout << "Enter a random string: ";
    cin >> word;
    // Run a linear search to find each character:
    int counter = 0;
    char target = '\0';
    for (int i =0; i < word.length(); i++){
            // Check for spaces
            if (word[i] != ' '){
                // run a second loop
            target = word[i];

            for (int j =0; j < word.length() ; j++){
                if (word[i] == word[j]){
                    counter++;
                }
            }
            cout << target << ": " << counter << endl;
            target = '\0';
            //reset the counter
            counter = 0;
            }


    }

}
