//Farkli parametre türü kullanarak fonksiyon asiri yukleme.

#include <iostream>
using namespace std;
class asiriYukleme
{
public:
    void yaz(int x)
    {
        cout << "Integer deger: " << x << endl;
    }
    void yaz(double y)
    {
        cout << "Double deger: " << y << endl;
    }
    void yaz(char z)
    {
        cout << "Char deger: " << z << endl;
    }
};

int main()
{
    asiriYukleme asiriYukleme1;
    asiriYukleme1.yaz(45);
    asiriYukleme1.yaz(34.78);
    asiriYukleme1.yaz('A');
    return 0;
}
