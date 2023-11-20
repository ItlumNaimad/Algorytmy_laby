#include <iostream>

#include <cmath>
double a, b, c;
int main()
{
    int choice;
    std::cout << "Wybierz rodzaj rownania do rozwiazania:" << std::endl;
    std::cout << "1. Rownanie liniowe (ax + b = 0)" << std::endl;
    std::cout << "2. Rownanie kwadratowe (ax^2 + bx + c = 0)" << std::endl;
    std::cin >> choice;
    switch(choice)
    {
        case 1:
            // Rozwiązywanie równania liniowego
            std::cout << "Podaj wspolczynnik a: ";
            std::cin >> a;
            std::cout << "Podaj wspolczynnik b: ";
            std::cin >> b;
            if (a == 0) {
                if (b == 0) {
                    std::cout << "Nieskonczenie wiele rozwiazan." << std::endl;
                } else {
                    std::cout << "Brak rozwiazan." << std::endl;
                }
            } else {
                double x = -b / a;
                std::cout << "Rozwiazanie: x = " << x << std::endl;
            }
        break;
        case 2:
            // Rozwiązywanie równania kwadratowego
            std::cout << "Podaj wspolczynnik a: ";
            std::cin >> a;
            std::cout << "Podaj wspolczynnik b: ";
            std::cin >> b;
            std::cout << "Podaj wspolczynnik c: ";
            std::cin >> c;
            if (a == 0) {
                if (b == 0) {
                    if (c == 0) {
                        std::cout << "Nieskonczenie wiele rozwiazan." << std::endl;
                    } else {
                        std::cout << "Brak rozwiazan." << std::endl;
                    }
                } else {
                    double x = -c / b;
                    std::cout << "Rozwiazanie: x = " << x << std::endl;
                }
            }
            else
            {
                double discriminant = b * b - 4 * a * c;
                if (discriminant > 0) {
                    double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
                    double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
                    std::cout << "Dwa pierwiastki rzeczywiste: x1 = " << x1 << " i x2 = " << x2 << std::endl;
                } else if (discriminant == 0) {
                    double x = -b / (2 * a);
                    std::cout << "Jeden pierwiastek rzeczywisty: x = " << x << std::endl;
                } else {
                    std::cout << "Brak pierwiastków rzeczywistych." << std::endl;
                }
            }
            break;
        default:
            std::cout<<"Nierozpoznana operacja";
    }
    return 0;
    }


