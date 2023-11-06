#include <iostream>
#include <cmath>

class Shape {
protected:
    int lenth;
    int width;
    int radius;
    double corner;
};

class Rectangle : private Shape {
public:
    int GetArea() {
        return width * lenth;
    }
    Rectangle(int lenth,int width);
};

Rectangle::Rectangle(int lenth, int width) {
    this -> lenth = lenth;
    this -> width = width;
}

class Triangle : protected Shape {
public:
    float GetArea(){
        double Corner = corner*M_PI/180;
        return (width*lenth*sin(Corner))/2;
    }
    Triangle(int lenth,int width,int corner);
};

Triangle::Triangle(int lenth, int width, int corner) {
    this -> lenth = lenth;
    this -> width = width;
    this ->  corner = corner;
}

class Circle : public Shape {
public:
    float GetArea() {
        return M_PI * radius * radius;
    }
    Circle(int radius);
};

Circle::Circle(int radius) {
    this ->  radius = radius;
}

int main() {
    //for rectangle
    Rectangle r(1,1);
    std::cout << r.GetArea() << std::endl;
    //for triangle
    Triangle t(10,4,40);
    std::cout << t.GetArea() << std::endl;
    //for circle
    Circle c(6);
    std::cout << c.GetArea() << std::endl;
    return 0;
}
