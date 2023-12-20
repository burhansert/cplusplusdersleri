//Farkli parametre sayisi kullanarak fonksiyon asiri yukleme.

#include <iostream>
using namespace std;
class Topla
{
public:
    int ekle(int a,int b)
    {
        return a + b;
    }

    int ekle(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main(void)
{
    Topla topla1;
    cout << topla1.ekle(21, 13) << endl;
    cout << topla1.ekle(21, 13, 30) << endl;
    return 0;
}
