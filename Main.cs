
using System;

class CharacterX
{
	public bool CheckVowels(char ch)
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

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Character");
		char cValue = Convert.ToChar(Console.ReadLine());

		CharacterX cobj = new CharacterX();
		bool bRet = cobj.CheckVowels(cValue);

		if(bRet == true)
		{
			Console.WriteLine("Character is Vowel");
		}
		else
		{
			Console.WriteLine("Character is Not Vowel");
		}
	}
}