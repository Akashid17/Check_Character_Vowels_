
def CheckVowels(ch):

    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or 
        ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U'):
        return True
    else:
        return False

if __name__ == "__main__":

    cValue = input("Enter Character\n")

    bRet = CheckVowels(cValue)

    if bRet == True:
        print("Character is Vowel")
    else:
        print("Character is Not Vowel")