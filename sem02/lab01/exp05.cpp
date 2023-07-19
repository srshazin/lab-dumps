#include <iostream>
#include <string>
using namespace std;

bool isNumInRange(int min, int max, int num);
int main()
{
    string pwd, msg;
    cout << "Enter your password: ";
    cin >> pwd;
    bool status = true;
    if (pwd.length() < 8)
    {
        cout << "Error: Password has to be more than 8 characters" << endl;
        status = false;
        return 1;
    }

    bool containsCap = false;
    for (int i = 0; i < pwd.length(); i++)
    {
        if ((int)pwd[i] >= 65 && (int)pwd[i] <= 90)
        {
            containsCap = true;
        }
    }
    bool containsSmall = false;
    for (int i = 0; i < pwd.length(); i++)
    {
        if ((int)pwd[i] >= 97 && (int)pwd[i] <= 122)
        {
            containsSmall = true;
        }
    }
    if (!containsCap)
    {
        cout << "Password must contains one Capital Letter";
        status = false;
        return 1;
    }
    if (!containsSmall)
    {
        cout << "Password must contains one Small Letter";
        status = false;
        return 1;
    }
    // Check for special chars
    bool containsAscii = false;
    for (int i = 0; i < pwd.length(); i++)
    {
        if (
            isNumInRange(33, 47, (int)pwd[i]) ||
            isNumInRange(58, 64, (int)pwd[i])

        )
        {
            containsAscii = true;
        }
    }
    if (!containsAscii)
    {
        cout << "Password must contains one special character";
        status = false;
        return 1;
    }

    if (status)
    {

        cout << "Valid Password!";
    }
}
bool isNumInRange(int min, int max, int num)
{
    if (num >= min && num <= max)
    {
        return true;
    }
    else
    {
        return false;
    }
}