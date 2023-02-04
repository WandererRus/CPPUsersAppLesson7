// CPPUsersAppLesson7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct MyPoint
{
    double x = 0;
    double y = 0;
};
struct MyRectangle
{
    int width = 50;
    int height = 50;
    MyPoint point{ 0,0 };
};
double DistancePointToPoint(MyPoint one, MyPoint two)
{
    return sqrt(pow((one.x - two.x), 2) + pow((one.y - two.y), 2));
}
MyRectangle MoveRectangle(MyRectangle one, double offsetX, double offsetY)
{
    one.point.x += offsetX;
    one.point.y += offsetY;

    /*if (one.point.x < 0)
        one.point.x = 0;
    if (one.point.y < 0)
        one.point.y = 0;*/

    return one;
}
MyRectangle ChangeSizeRectangle(MyRectangle one, int changeX = 0, int changeY = 0)
{
    one.width += changeX;
    one.height += changeY;

    if (one.width <= 0)
        one.width = 1;
    if (one.height <= 0)
        one.height = 1;

    return one;
}
int main()
{
    MyPoint newpoint;
    newpoint.x = 5.3;
    newpoint.y = 3.2;
    MyPoint oldpoint;
    oldpoint.x = 3.7;
    oldpoint.y = 7.8;
    MyPoint pnt;
    pnt.x = 1;
    pnt.y = 1;
    MyRectangle rect{ 50,50,pnt };
    //std::cout << DistancePointToPoint(oldpoint,newpoint);
    rect = MoveRectangle(rect, 1,1);
    std::cout << rect.point.x << " " << rect.point.y;
    std::cout << "\n";
    rect = ChangeSizeRectangle(rect, 10, -5);
    std::cout << rect.width << " " << rect.height;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
