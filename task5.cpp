
#include <iostream>
#include "time.h"
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int way;
    int num;
    int imax, imin,n;
    cout << "\n\nEntere 1 if you want to continue/ Entere any number if u want to stop\n";
    cin >> way;
    if (way == 1) {
        do
        {
            do
            {
                cout << "n= ";
                cin >> n;
            } while (n <= 0);
            double* arr = new double[n];
            int n1 = n - 1;
            srand(unsigned(time(0)));
            cout << "Genearate massive= ";
            for (int i = 0; i < n; i++) // заполнение массива рандомныеми числами
            {
                num = rand() % 50 + 1;
                arr[i] = num;
                cout << arr[i] << " ";
            }
            cout << "\n";
            int i = 0;
            int amax = 0;
            int amin = INT_MAX;
            int imax = 0;
            int imin = 0;
            for (int i = 0; i < n - 1; i++) // поиск макс эл-та массива и его индекса
            {
                if (arr[i] > amax)
                {
                    amax = arr[i];
                    imax = i;
                }
            }
            for (int i = 0; i < n - 1; i++) // поиск мин эл-та массива и его индекса
            {
                if (arr[i] < amin)
                {
                    amin = arr[i];
                    imin = i;
                }
            }
            if (imin == imax + 1 || imax == imin + 1)
            {
                cout << "0el - not sorted" << endl; // если 0 эл-тов между макс и мин
            }
            else if (imin == imax + 2 || imin == imax + 2)
            {
                cout << "1el - not sorted" << endl; // если 1 эл-т между макс и мин
            }
            int x = imax;
            int y = imin;
            if (imax > imin) {
                for (int i = imax; i >= imin; i--)
                {
                    if (i == imax) cout << arr[imin] << " ";
                    else if (i == imin) cout << arr[imax] << " ";
                    else cout << arr[i] << " ";
                }
            }
            if (imax < imin) {
                for (int i = imin; i >= imax; i--)
                {
                    if (i == imin) cout << arr[imax] << " ";
                    else if (i == imax) cout << arr[imin] << " ";
                    else cout << arr[i] << " ";
                }
            }
            cout << "\n\nEntere 1 if you want to continue/ Entere any number if u want to stop\n";
            cin >> way;
        } while (way == 1);
        if (way != 1)
        {
            exit(0);
        }
    }
}
