#include <iostream>
using namespace std;

struct Box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

// а. Функция для отображения членов структуры
void displayBox(Box box)
{
    cout << "Производитель: " << box.maker << endl;
    cout << "Высота: " << box.height << endl;
    cout << "Ширина: " << box.width << endl;
    cout << "Длина: " << box.length << endl;
    cout << "Объем: " << box.volume << endl;
}

// б. Функция для вычисления объема
void calculateVolume(Box *box)
{
    box->volume = box->height * box->width * box->length;
}

int main()
{
    Box myBox;

    // Ввод данных для структуры
    cout << "Введите производителя: ";
    cin.getline(myBox.maker, 40);
    cout << "Введите высоту: ";
    cin >> myBox.height;
    cout << "Введите ширину: ";
    cin >> myBox.width;
    cout << "Введите длину: ";
    cin >> myBox.length;

    // Вызов функции для вычисления объема
    calculateVolume(&myBox);

    // Вызов функции для отображения членов
    displayBox(myBox);

    return 0;
}
