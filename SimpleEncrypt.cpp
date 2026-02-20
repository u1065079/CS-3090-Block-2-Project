/**
 * Simple Encrypt
 *
 * @brief Converts a word into an encrypted equivalent.
 *
 * @author Jacob Thomas Groneman, A.S.
 * @date Written on February 19th, 2026
 */

#include <iostream>
#include <string>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * @brief executable; Expects a one lowercase word for input &
 * outputs its encrypted equivalent word.
 *
 * @return if this application is successful as 0; otherwise -1
 */
int main()
{
    // Introduce application & request input
    cout << "------------------------" << endl;
    cout << "Welcome to Simple Encrypt" << endl;
    cout << "------------------------" << endl;
    cout << "Please input a lowercase word to encrypt (no periods or punctuation)." << endl;
    cout << "The encrypted word will be output below it." << endl
         << endl;

    string word;
    cin >> word;

    // encrypt all characters from input & output encrypted equivalent
    for (char c : word)
    {
        // verify all characters are lowercase
        if (c < 97 || c > 123)
        {
            cout << "Please start the application again & input a word only containing lowercase characters." << endl;
            return -1;
        }

        // a very simple (wonky) encryption for each character
        srand(c + time(nullptr));
        cout << (char)((rand() % 26) + 97);
    }

    cout << endl;

    // end the program
    return 0;
}
