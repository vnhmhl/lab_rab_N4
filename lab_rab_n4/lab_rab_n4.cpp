#include <iostream>
#include <ctime>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");

    int a[100] = { 0 }; 
    int b[100] = { 0 };
    int n, m, i, j = 0;
    cout << "\nВведите размер массива: ";
    cin >> n;
    m = n;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    cout << endl;

    for (i = 0; i < n; i++)
        if (a[i])
            b[j++] = a[i];
        else m--;
    cout << "После удаления элемента 0" << endl;
    for (i = 0; i < m; i++)
        cout << b[i] << " ";
    cout << endl;
    for (i = 0; i < m; i++)
        if ((b[i] % 2 == 0) && (i != 0))
        {

            b[++i] = b[i - 1] + 2;
            break;
        }
    cout << endl;
    cout << "После добавления M[I-1]+2 " << endl;
    for (i = 0; i < m; i++)
        if (b[i]) cout << b[i] << " ";
    cout << endl;
   
    return 0;
}