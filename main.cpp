#include <iostream>
#include <cmath>

class Shape {
protected:
    int lenth;
    int width;
    int radius;
    int corner;
public:
    void Print(){
        std::cout << "U create Shape" << std::endl;
    }
};

class Rectangle : private Shape {
public:
    int GetArea() {
        return width * lenth;
    }
    void Show(){
        Print();
        std::cout << "Ur shape is Rectangle, its area is : " << std::endl ;
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
    void Show(){
        Print();
        std::cout << "Ur shape is Triangle, its area is : " << std::endl;
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
    void Show(){
        Print();
        std::cout << "Ur shape is Circle, its area is : " << std::endl;
    }
    Circle(int radius);
};

Circle::Circle(int radius) {
    this ->  radius = radius;
}

int main() {
    //for shape
    Shape s;
    s.Print();
    std::cout << std::endl;
    //for rectangle
    Rectangle r(1,1);
    r.Show();
    std::cout << r.GetArea() << std::endl;
    std::cout << std::endl;
    //for triangle
    Triangle t(10,4,40);
    r.Show();
    std::cout << t.GetArea() << std::endl;
    std::cout << std::endl;
    //for circle
    Circle c(6);
    c.Show();
    std::cout << c.GetArea() ;
    return 0;
}
