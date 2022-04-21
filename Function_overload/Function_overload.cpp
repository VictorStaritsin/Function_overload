/////////////////
// ЗАДАНИЕ № 1//
/////////////////

///*
//Задание 1 Написать перегруженные функции (int, double,
//char) для выполнения следующих задач:
//■ Инициализация квадратной матрицы;
//■ Вывод матрицы на экран;
//■ Определение максимального и минимального элемента
//на главной диагонали матрицы;
//■ Сортировка элементов по возрастанию отдельно для
//каждой строки матрицы.
//*/
//
//#include <iostream>
//#include <limits.h>
//#include <iomanip>
//
//using namespace std;
//
//enum userChoice
//{
//    Exit = 0,
//    Initialize = 1,
//    Print = 2,
//    MinMax = 3,
//    Sort = 4
//};
//
//void matrixDoSomething(int(*)[10], int, int);
//void matrixDoSomething(int(*)[10], int);
//void matrixDoSomething(int(*)[10], int, int, int);
//void matrixDoSomething(int(*)[10]);
//
//int main()
//{
//    setlocale(0, "");
//    int const massivDimention = 10;
//    int massiv[massivDimention][massivDimention] = { 0 };
//    int limitNumber = 100;
//    int max = INT_MIN;
//    int min = INT_MAX;
//    int intUserChoice;
//    enum userChoice userChoice;
//
//    do
//    {
//        cout << "Выберете раздел матрицы: " << endl <<
//            "0 = Выход" << endl << "1 = Инициализация квадратной матрицы" << endl <<
//            "2 = Вывод матрицы на экран" << endl << "3 = Определение максимального и минимального элемента матрицы " << endl <<
//            "4 =Сортировка элементов матрицы " << endl;
//        cin >> intUserChoice;
//        userChoice = (enum userChoice)intUserChoice;
//
//        switch (userChoice)
//        {
//        case Exit:
//            cout << "Выход " << endl;
//            break;
//        case Initialize:
//            matrixDoSomething(massiv, massivDimention, limitNumber);
//            break;
//        case Print:
//            matrixDoSomething(massiv, massivDimention);
//            break;
//        case MinMax:
//            matrixDoSomething(massiv, massivDimention, min, max);
//            break;
//        case Sort:
//            matrixDoSomething(massiv);
//            break;
//        default:
//            cout << "Ошибка. Неправильный выбор!" << endl;
//            return 1;
//        }
//    } while (userChoice != Exit);
//    return 0;
//}
//Инициализация квадратной матрицы;
//void matrixDoSomething(int arr[][10], int size, int limitNumber)
//{
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            arr[i][j] = rand() % limitNumber;
//        }
//    }
//    cout << "Инициализация квадратной матрицы" << arr << endl;
//}
////Вывод матрицы на экран;
//void matrixDoSomething(int arr[][10], int arSize)
//{
//    cout << "Вывод матрицы на экран: " << endl;
//    for (int i = 0; i < arSize; i++)
//    {
//        for (int j = 0; j < arSize; j++)
//        {
//            cout << fixed << setw(3) << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
////Определение максимального и минимального элемента на главной диагонали матрицы;
//void matrixDoSomething(int arr[][10], int arSize, int minElement, int maxElement)
//{
//    for (int i = 0; i < arSize; i++)
//    {
//        if (arr[i][i] > maxElement)
//        {
//            maxElement = arr[i][i];
//        }
//        if (arr[i][i] < minElement)
//        {
//            minElement = arr[i][i];
//        }
//    }
//    cout << "Минимальный элемент матрицы = " << minElement << endl <<
//        "Максимальный элемент матрицы = " << maxElement << endl;
//}
////Сортировка элементов по возрастанию отдельно для каждой строки матрицы.
//void matrixDoSomething(int arr[][10])
//{
//    int arraySize = 10;
//    int bufer;
//    cout << "Сортировать по возрастанию элементы каждой строки отдельно" << endl;
//    for (int k = 0; k < arraySize; k++)
//    {
//        for (int j = 0; j < arraySize - 1; j++)
//        {
//            for (int i = 1; i < arraySize - j; i++)
//            {
//                if (arr[k][i] < arr[k][i - 1])
//                {
//                    bufer = arr[k][i - 1];
//                    arr[k][i - 1] = arr[k][i];
//                    arr[k][i] = bufer;
//
//                }
//            }
//        }
//    }
//}

/////////////////
// ЗАДАНИЕ № 2 //
/////////////////

///*
//Задание 2. Написать рекурсивную функцию нахождения
//наибольшего общего делителя двух целых чисел.
//*/
//
//
//#include <iostream>
//using namespace std;
//
//// NOD и НОД -> наибольший общий делитель
//int NOD(int first, int second)
//{
//    if (first * second == 0) return first + second;
//    if (first < second)return NOD(first, second % first);
//    else return NOD(first % second, second);
//}
//
//void main()
//{
//    setlocale(LC_ALL, "Rus");
//    int first, second;
//    cout << "Введите первое значение" << endl;
//    cin >> first;
//    cout << "Введите второе значение" << endl;
//    cin >> second;
//    cout << "НОД(" << first << ", " << second << ")=" << NOD(first, second) << endl;
//    system("pause");
//}

/////////////////
// ЗАДАНИЕ № 3 //
/////////////////

/*
Задание 3 Написать игру «Быки и коровы».
Программа "загадывает" четырёхзначное число
и играющий должен угадать его.
После ввода пользователем числа программа сообщает,
сколько цифр числа угадано (быки) и
сколько цифр угадано и стоит на нужном месте (коровы).
После отгадывания числа на экран необходимо
вывести количество сделанных пользователем попыток.
*/

#include <iostream>
#include <time.h>

using namespace std;

bool numberCheck(int secretNumber, int userNumber);
bool validNumber(int number);

int main()
{
    setlocale(0, "");
    srand((int)time(NULL));
    //загадываем число
    int secretNumber = rand() % 9000 + 1000;
    int userNumber;
    int count = 0;

    //cout << "Случайное число = " << secretNumber << endl;

    do
    {
        cout << "Введите случайное число (4 цифры) или введите 0 для выхода: ";
        cin >> userNumber;
        count++;
    } while (!numberCheck(secretNumber, userNumber) && userNumber != 0);
    cout << "Количество попыток: " << count << endl;
}

bool numberCheck(int secretNumber, int userNumber)
{
    //проверка валидности введенного числа
    if (!validNumber(userNumber))
    {
        return false;
    }
    //проверка выйгрыша
    if (secretNumber == userNumber)
    {
        cout << "Ты Победил" << endl;
        return true;
    }

    int user1000 = userNumber / 1000;
    int user100 = userNumber / 100 % 10;
    int user10 = userNumber / 10 % 10;
    int user1 = userNumber % 10;
    int secret1000 = secretNumber / 1000;
    int secret100 = secretNumber / 100 % 10;
    int secret10 = secretNumber / 10 % 10;
    int secret1 = secretNumber % 10;
    int rightNumbers = 0;
    int absolutNumbers = 0;

    if (secret1000 == user1 || secret1000 == user10 || secret1000 == user100 || secret1000 == user1000)
        rightNumbers++;
    if (secret100 == user1 || secret100 == user10 || secret100 == user100 || secret100 == user1000)
        rightNumbers++;
    if (secret10 == user1 || secret10 == user10 || secret10 == user100 || secret10 == user1000)
        rightNumbers++;
    if (secret1 == user1 || secret1 == user10 || secret1 == user100 || secret1 == user1000)
        rightNumbers++;
    if (user1 == secret1)
        absolutNumbers++;
    if (user10 == secret10)
        absolutNumbers++;
    if (user100 == secret100)
        absolutNumbers++;
    if (user1000 == secret1000)
        absolutNumbers++;

    cout << "Всего угаданных чисел: " << rightNumbers << endl <<
        "Стоит на своем месте: " << absolutNumbers << endl;
    return false;
}

bool validNumber(int number)
{
    if (number < 0 || (number > 0 && number < 1000) || number > 9999)
    {
        cout << "неправильный номер(не 4 цифры)" << endl;
        return false;
    }
    return true;
}

