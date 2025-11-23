#include <iostream>

class Kruh
{
public:

    // Výchozí konstruktor
    Kruh()
    {
        radius = 0;
    }

    // Konstruktor s parametrem
    Kruh(float velikostRadiusu)
    {
        radius = velikostRadiusu;
    }

    // Funkce pro nastavení poloměru
    void setRadius(float radiusSize)
    {
        radius = radiusSize;
    }

    // Vrácení poloměru
    float getRadius()
    {
        return radius;
    }

    // Výpočet obsahu kruhu
    float spocitejPlochu()
    {
        return PI * radius * radius;
    }

    // Výpočet obvodu kruhu
    float spocitejObvod()
    {
        return 2 * PI * radius;
    }

private:
    float radius;
    static const float PI;
};


const float Kruh::PI = 3.14f;

int main() 
{
    float prvniRadius = 5;
    Kruh prvniKruh;           // Vytvoření objektu kruh
    prvniKruh.setRadius(prvniRadius);

    std::cout << "\nPrvni kruh:" << std::endl;
    std::cout << "Polomer: " << prvniKruh.getRadius() << std::endl;
    std::cout << "Obsah je: " << prvniKruh.spocitejPlochu() << std::endl;
    std::cout << "Obvod je: " << prvniKruh.spocitejObvod() << std::endl;

    
    float druhyRadius = 4;
    Kruh druhyKruh(druhyRadius);

    std::cout << "\nDruhy kruh:" << std::endl;
    std::cout << "Polomer: " << druhyKruh.getRadius() << std::endl;
    std::cout << "Obsah je: " << druhyKruh.spocitejPlochu() << std::endl;
    std::cout << "Obvod je: " << druhyKruh.spocitejObvod() << std::endl;

    return 0;
}
