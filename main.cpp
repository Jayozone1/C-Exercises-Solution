#include <iostream>

using namespace std;

int main()
{

    cout << "Enter the name of the person you want to write to(followed by 'enter'):\n";
    string first_name; // first_name is a variable of type string
    cin >> first_name; // read characters into first_name
    cout << "Dear " <<  first_name << ",\n";
    cout << "How are you? I am fine. I miss you. \n";
    cout << "Enter the name of your friend:\n";
    string friend_name; // friend_name is a variable of type string
    cin >> friend_name; //read characters into friend_name
    cout << "Have you seen " <<  friend_name  << " lately\n";

    char friend_sex = 0; //sex of friend_sex

    cout << "If your friend's sex is male type m\n";
    cout << "If your friend's sex is female type f\n";



    const char m = 'm';
    const char f = 'f';

   /* string m;
    cin >> m;

    string f;
    cin >> f;*/

    cin >> friend_sex;

    if (friend_sex == m)
    {
        cout << "if you see " << friend_name << " ask him to call me\n";
    }

    else if (friend_sex == f)
    {
        cout << "if you see " << friend_name << " ask her to call me\n";
    }

    cout << "Write the age of the recipient\n";
    int age;
    cin >> age;
    if( ( age < 0 ) || (age >= 110) )
    {
        cout << "you are kidding!\n";
    }
     else
    {
        cout << "I hear you just had a birthday and you are " << age << " years old\n";
    }

    if( age < 12)
    {
        cout << "Next year you will be" << age+1 << " \n";
    }

    if( age == 17)
    {
        cout << "Next year you will be able to vote\n";
    }

    if (age > 70)
    {
        cout << "I hope you are enjoying retirement.\n";
    }

    cout << "Your Sincerely. \n";
    cout << "Signature.    \n";
    cout << first_name << "\n";


    return 0;
}

