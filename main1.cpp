#include <iostream>
#include <cmath>

class Shape {
protected:
    int lenth;
    int width;

public:
    void SetLenth(int lenth) {
        this->lenth = lenth;
    }

    void SetWidth(int width) {
        this->width = width;
    }
};

class Rectangle : public Shape {
public:
    int GetArea() {
        return width * lenth;
    }
};

class Circle : public Shape {
private:
    int radius;
public:
    void SetRadius(int radius) {
        this->radius = radius;
    }

    float GetArea() {
        return M_PI * radius * radius;
    }
};

int main() {
    //for rectangle
    Rectangle r;
    r.SetLenth(3);
    r.SetWidth(4);
    std::cout << r.GetArea() << std::endl;
    //for circle
    Circle c;
    c.SetRadius(4);
    std::cout << c.GetArea() << std::endl;
    return 0;
}
