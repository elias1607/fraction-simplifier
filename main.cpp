#include <iostream>

int main()
{
std::cout << "Entrer la fraction que vous voulez simplifiez : " << std::endl;
    int a;
    std::cin >> a;

    int b;
    std::cin >> b;

    int save_a = a;
    int save_b = b;

    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
        }
        std::cout << "Le resultat est : " << save_a / b << "/" << save_b / b << std::endl;
}
