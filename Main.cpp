
#include<iostream>

using namespace std;

class CharacterX
{
    public:
        bool CheckVowels(char);
};

bool CharacterX::CheckVowels(char ch)
{
    if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||
        ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter Character\n";
    cin>>cValue;

    CharacterX cobj;

    bRet = cobj.CheckVowels(cValue);

    if(bRet == true)
    {
        cout<<"Character is Vowels\n";
    }
    else
    {
        cout<<"Character is Not Vowels\n";
    }

    return 0;
}