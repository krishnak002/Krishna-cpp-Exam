#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() 
    { 
        return 3.14 * radius * radius; 
    }
    void draw() 
    { 
        cout << "Drawing Circle\n"; 
    }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() 
    { 
        return width * height; 
    }
    void draw() 
    { 
        cout << "Drawing Rectangle\n"; 
    }
};

int main() {
    double r, w, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter width of rectangle: ";
    cin >> w;
    cout << "Enter height of rectangle: ";
    cin >> h;

    Shape* shapes[2];
    shapes[0] = new Circle(r);
    shapes[1] = new Rectangle(w, h);

    for (int i = 0; i < 2; i++) 
    {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << "\n";
    }

    return 0;
}
