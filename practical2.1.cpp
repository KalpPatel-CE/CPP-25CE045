#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    void setDimensions(double l, double w)
    {
        length = l;
        width = w;
    }

    void updateDimensions(double l, double w)
    {
        length = l;
        width = w;
    }

    double calculateArea()
    {
        return length * width;
    }

    double calculatePerimeter()
    {
        return 2 * (length + width);
    }

    void display()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << ", Perimeter: " << calculatePerimeter() << endl;
    }
};

int main()
{
    int numRectangles = 3;
    Rectangle rectangles[numRectangles];

    int choice;
    do
    {
        cout << "\n Enter as per need \n";
        cout << "1. Enter dimensions for Rectangles\n";
        cout << "2. Display perimeter and area of Rectangles\n";
        cout << "3. Update a specific Rectangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                for (int i = 0; i < numRectangles; i++)
                {
                    double l, w;
                    cout << "Enter the dimensions for Rectangle " << (i + 1) << ":" << endl;
                    cout << "Length: ";
                    cin >> l;
                    cout << "Width: ";
                    cin >> w;
                    rectangles[i].setDimensions(l, w);
                }
                break;

            case 2:
                for (int i = 0; i < numRectangles; i++)
                {
                    cout << "\nRectangle " << (i + 1) << ": " << endl;
                    rectangles[i].display();
                }
                break;

            case 3:
                int rectChoice;
                cout << "\nEnter the number of the rectangle you want to update (1-" << numRectangles << "): ";
                cin >> rectChoice;
               
                if (rectChoice >= 1 && rectChoice <= numRectangles)
                {
                    double newLength, newWidth;
                    cout << "Enter new dimensions for Rectangle " << rectChoice << ":" << endl;
                    cout << "New Length: ";
                    cin >> newLength;
                    cout << "New Width: ";
                    cin >> newWidth;
                    rectangles[rectChoice - 1].updateDimensions(newLength, newWidth);
                    rectangles[rectChoice - 1].display();
                }
                else
                {
                    cout << "Invalid choice! Please enter a number between 1 and " << numRectangles << endl;
                }
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while(choice != 4);

    return 0;
}
