#include <iostream>
#include <math.h>
using namespace std;
/*
void main()
{
    setlocale(0, "Russian"); //Вывод сообщений на русском языке
    double A, B, Y;
    cout << "Введите A:" << endl;
    cin >> A;
    cout << "Введите B:" << endl;
    cin >> B;
    system("cls");
    Y = log(tan(A) + sqrt(B));
    cout << "Искомое значение: " << Y << endl;
    system("pause");
}
*/
void main()
{
    setlocale(0, "Russian"); //Вывод сообщений на русском языке
    //const double A = 4.0;
    //const double B = 13.6;
    double A, B, Y;

    printf("Введите A : \n");
    scanf_s("%lf", &A);
    printf("Введите B : \n");
    scanf_s("%lf", &B);

    system("cls");
    Y = log(tan(A) + sqrt(B));

    printf("Искомое значение Y = %lf \n", Y);

    system("pause");
}
