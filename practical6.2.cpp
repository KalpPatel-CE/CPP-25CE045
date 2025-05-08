//This program is prepared by 24ce043_Dev

#include<iostream>
using namespace std;

// Point class representing a point in 2D space
class Point
{
    int x, y; // x and y coordinates

public:
    // Constructor with default parameters
    Point(int x=0, int y=0) : x(x), y(y) {}

    // Function to move the point by dx and dy, and allow method chaining
    Point* move(int dx, int dy)
    {
        x += dx;
        y += dy;
        return this;
    }

    // Function to display the current coordinates
    void display() const
    {
        cout << "x coordinate: " << x << endl;
        cout << "y coordinate: " << y << endl;
    }
};

int main()
{
    int x, y;

    // Taking initial coordinates from user
    cout << "Enter the x and y coordinates: ";
    cin >> x >> y;

    // Dynamically creating a Point object
    Point* p = new Point(x, y);

    // Displaying initial coordinates
    p->display();

    int dx1, dx2, dy1, dy2;

    // Taking first movement values
    cout << "Enter the first x and y coordinates: ";
    cin >> dx1 >> dy1;

    // Taking second movement values
    cout << "Enter the second x and y coordinates: ";
    cin >> dx2 >> dy2;

    // Moving the point by two sets of values using method chaining
    p->move(dx1, dy1)->move(dx2, dy2);

    // Displaying coordinates after movement
    cout << "Coordinates after moving the point: " << endl;
    p->display();

    cout << endl;
    cout << "\n24CE045_Kalp\n" << endl;

    return 0;
}
