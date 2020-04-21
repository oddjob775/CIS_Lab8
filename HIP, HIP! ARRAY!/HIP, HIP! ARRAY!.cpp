/*
create menu of choices
    find way for case to return to cout of menu options

create functions for

lots of google, youtube, and talking to friendo who codes for living.

    Palindrome
        true/false?
            if/else for couts

    Alphabet
        boolean or char?
            user input = char str
                if/else for couts

    Counter
        
*/


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int
    main_menu_options;

char
    Continue;

bool
    repeat_palin,
    repeat_alph,
    repeat_count,
    run = true;



bool Palindrome(string str)
{
    size_t len = str.length();

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return 0;
}

bool Alpha_string(char str[])
{
    bool
        return_value = true;

    //char yolo[255] = {};
        for(int i = 0; i < strlen(str); i++)
        {
            if (!isalpha(str[i]))
            {
                return_value = false;
            }
        }
        return return_value;
}

int string_counter(string s, char c)
{
    int cntr = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            cntr++;
        }

    }
    return cntr;
}

int main()
{
    do {

        cout << "************************************************\n";
        cout << "************************************************\n";
        cout << "**" << setw(25) << "Main Menu" << setw(22) << "**\n";
        cout << "************************************************\n";
        cout << "************************************************\n";
        cout << "**" << setw(30) << "1) Palindrome Check" << setw(17) << "**\n";
        cout << "**" << setw(28) << "2) Alphabet Check" << setw(19) << "**\n";
        cout << "**" << setw(29) << "3) Character Count" << setw(18) << "**\n";
        cout << "**" << setw(18) << "4) Quit" << setw(29) << "**\n";
        cout << "************************************************\n";
        cout << "************************************************\n";



        cout << "\nWhat would you like to do?\n";
        cin >> main_menu_options;


        switch (main_menu_options)
        {
        case 1:
        {

            string
                Text_Palindrome;

            repeat_palin = true;
            do
            {

                cout << "\nType a word to see if its a palindrome.\n" << endl;
                cin >> Text_Palindrome;

                if (Palindrome(Text_Palindrome))
                {
                    cout << "Your word is a palindrome!\n";
                }
                else if (!Palindrome(Text_Palindrome))
                {
                    cout << "\nYour word is not a palindrome\n";
                }
                cout << "Would you like to return to the main menu? Y/N\n";
                cin >> Continue;

                Continue = tolower(Continue);

                if (Continue == 'y')
                {
                    repeat_palin = false;
                }
            } while (repeat_palin == true);

        }
        break;

        case 2:
        {
            char
                text_alpha[255];

            repeat_alph = true;

            do
            {

                cout << "\nPlease type a string of less than 255 characters.\n";
                cin >> text_alpha;

                if (Alpha_string(text_alpha))
                {
                    cout << "\nAll of your characters are part of the alphabet\n";
                }

                else
                {
                    cout << "\nNot all of your characters are part of the alphabet\n";
                }
                cout << "\nWould you like to return to the main menu? Y/N\n";
                cin >> Continue;
                Continue = tolower(Continue);

                if (Continue == 'y')
                {
                    repeat_alph = false;
                }
            } while (repeat_alph == true);
        }
        break;

        case 3:
        {
            string
                text_1;
            char
                text_2;

            repeat_count = true;

            do
            {
                cout << "\nPlease type in a word.\n";
                cin >> text_1;

                cout << "\nWhat character would you like counted?\n";
                cin >> text_2;

                cout << "\nThe character '" << text_2 << "' appears " << string_counter(text_1, text_2) << " times within '" << text_1 << "'.\n";

                cout << "\nWould you like to return to the main menu? Y/N\n";
                cin >> Continue;
                Continue = tolower(Continue);

                if (Continue == 'y')
                {
                    repeat_count = false;
                }
            } 
            while (repeat_count == true);
        }
        break;

        case 4:
        {
            run = false;

            cout << "\nThanks for being such a USER!\n";

            return run;
        }
        }
    } while
        (run == true);

}