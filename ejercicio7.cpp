#include <iostream>
#include <cctype>
 
int main()
{
    int ch;
    char c;
 
    int letras[27] = {0};
 
    std::cout << "\nFrase: ";
 
    while ((ch = getchar()) != '\n')
    {
        c = ch;
        c = toupper(c);
 
        if (isalpha(c))
            letras[int(c) - 65]++;
    }
 
    std::cout <<  std::endl;
    for (int i = 0; i < 27; i++)
        if (letras[i] > 1)
            std::cout << char(i + 65) << ": " << letras[i] << std::endl;
 
    return 0;
}
