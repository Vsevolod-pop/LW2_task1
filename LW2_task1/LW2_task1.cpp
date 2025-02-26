#include <iostream>
#include <random>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int A[10];
    int* sql = A;
    for (int i = 0; i < 10; i++)
    {
        *(sql + i) = -1000 + rand() / ((1000 + 1) + 1000);
    }
    int _2_ = 0;
    int _8_ = 0;
    int _20_ = 0;
    int count2 = 0;
    int count8 = 0;
    int count20 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (*(sql + i) % 8 == 0)
        {
            _8_ += *(sql + i);
            count8++;
        }
        if (*(sql + i) > 2)
        {
            _2_ += *(sql + i);
            count2++;
        }
        if (*(sql + i) < 20)
        {
            _20_ += *(sql + i);
            count20++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " элемент массива равен: " << *(sql + i) << endl;
    }
    cout << "Количество чисел больше 2: " << count2 << endl << "Сумма чисел больше 2: " << _2_ << endl;
    cout << "Количество чисел меньше 20: " << count20 << endl << "Сумма чисел меньше 20: " << _20_ << endl;
    cout << "Количество чисел кратных 8: " << count8 << endl << "Сумма чисел кратных 8: " << _8_ << endl;
}