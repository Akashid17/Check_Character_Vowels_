
import java.lang.*;
import java.util.*;

class CharacterX
{
    public boolean CheckVowels(char ch)
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
}

class Main
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Character");
        char cValue = sobj.next().charAt(0);

        CharacterX cobj = new CharacterX();
        boolean bRet = cobj.CheckVowels(cValue);

        if(bRet == true)
        {
            System.out.println("Character is Vowel");
        }
        else
        {
            System.out.println("Character is Not Vowel");
        }
    }
}