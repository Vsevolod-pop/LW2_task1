#include <iostream>
#include <random>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(0);
    cout << "Выберите способ генерации массива. Для выбора способо введите его номер без пробелов:" << endl << "1. Генерация с помощью функции 'random'" << endl << "2. Ввод значений пользователем." << endl;
    string X;
    getline(cin, X);
    string _123_ = "12";
    int f = 1;
    while (true)
    {
        if (X.size() != 1)
        {
            cout << "Вы ввели Вы ввели не число или ввели его некорректно. Попробуйте еще раз ввести число без пробелов и других символов:" << endl;
            getline(cin, X);
            continue;
        }
        if (f == 0)
        {
            break;
        }
        for (int i = 0; i <= X.size(); i++)
        {
            f = 0;
            int count = 0;
            for (int y = 0; y <= _123_.size(); y++)
            {
                if (X[i] == _123_[y])
                {
                    count++;
                }
            }
            if (count == 0)
            {
                cout << "Вы ввели не то число. Попробуйте еще раз ввести число без пробелов и других символов:" << endl;
                getline(cin, X);
                f = 1;
            }
        }
    }
    int variant = stoi(X);
    int A[10];
    if (variant == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            A[i] = -1000 + rand() % ((1000+1)+1000);
        }
    }
    else
    {
        string _123_ = "1234567890";
        for (int z = 0; z < 10; z++)
        {
            cout << "Введите число: ";
            string X;
            getline(cin, X);
            while (X.size() == 0)
            {
                cout << "Вы ничего не ввели, ведите число: ";
                getline(cin, X);
            }
            int f = 1;
            while (true)
            {
                if (f == 0)
                {
                    break;
                }
                for (int i = 0; i < X.size(); i++)
                {
                    f = 0;
                    int count = 0;
                    if (X[i] == '-' and X.size() != 1)
                    {
                        continue;
                    }
                    for (int y = 0; y < _123_.size(); y++)
                    {
                        if (X[i] == _123_[y])
                        {
                            count++;
                        }
                    }
                    if (count == 0)
                    {
                        cout << "Вы ввели не число. Попробуйте еще раз ввести число без пробелов и других символов:" << endl;
                        getline(cin, X);
                        f = 1;
                    }
                }
            }
            A[z] = stoi(X);
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "А[" << i << "]= " << A[i] << endl;
    }
    int _2_ = 0;
    int _8_ = 0;
    int _20_ = 0;
    int count2 = 0;
    int count8 = 0;
    int count20 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] % 8 == 0)
        {
            _8_ += A[i];
            count8++;
        }
        if (A[i] > 2)
        {
            _2_ += A[i];
            count2++;
        }
        if (A[i] < 20)
        {
            _20_ += A[i];
            count20++;
        }
    }
    cout << "Количество чисел больше 2: " << count2 << endl << "Сумма чисел больше 2: " << _2_ << endl;
    cout << "Количество чисел меньше 20: " << count20 << endl << "Сумма чисел меньше 20: " << _20_ << endl;
    cout << "Количество чисел кратных 8: " << count8 << endl << "Сумма чисел кратных 8: " << _8_ << endl;
}