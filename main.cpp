#include <iostream>

class Shape {
public:
    void show() {
        std::cout << "Its Shape" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void show() {
        std::cout << "Its Rectangle" << std::endl;
    }
};

class Circle : public Shape {
public:
    void show() {
        std::cout << "Its Circle" << std::endl;
    }
};

int main() {

    Shape shape;
    Rectangle rectangle;
    Circle circle;

    shape.show();
    rectangle.show();
    circle.show();

    return 0;
}
