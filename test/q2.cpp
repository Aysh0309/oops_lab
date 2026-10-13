

#include <iostream>
using namespace std;
class Circle;

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w){
        length = l;
        width = w;
    }
    friend void compareArea(Circle c,Rectangle r);
};

class Circle { 
    private:
    double radius;
public:
    Circle(double r){ 
        radius = r;
    }
    friend void compareArea(Circle c,Rectangle r);
};

 void compareArea(Circle c,Rectangle r){
        double arear=r.length * r.width;
        double areac=3.14*c.radius*c.radius;
        cout << "Area of rectangle: " << arear << endl;
        cout<<"area of circle: "<<areac<<endl;
        if(areac > arear){
            cout<<"Circle has larger area."<<endl;
        }
        else{
            cout<<"Rectangle has larger area."<<endl;
        }
    }

int main() {
    double l,b,ra;
    cout<< "Enter length and Breadth of rectangle: ";
    cin>>l>>b;
    cout<< "Enter radius of circle: ";
    cin>>ra;
    Rectangle r(l, b);
    Circle c(ra);
    compareArea(c,r);
    return 0;
}