#include <iostream>
#include <cmath>


using namespace std;

//Function declarations

double compute_area(double lengthSideOne, double lengthSideTwo);

double compute_perimeter (double lengthSideOne, double lengthSideTwo);

double compute_diagonal (double lengthSideOne, double lengthSideTwo);

void displayed_answers(double area, double perimeter, double diagonal);



//Function call
int main()
{

    double lengthSideOne, lengthSideTwo, area, perimeter, diagonal;

    cout << "Enter the length of side one: ";
    cin >> lengthSideOne;
    cout << "Enter the length of side two: ";
    cin >> lengthSideTwo;

    if (lengthSideOne <= 0 || lengthSideTwo <= 0)
        {
        cout << "That is not a valid side length.";
        cout << endl;
        }

    else
        {
        area = compute_area(lengthSideOne, lengthSideTwo);

        perimeter = compute_perimeter(lengthSideOne, lengthSideTwo);

        diagonal = compute_diagonal(lengthSideOne, lengthSideTwo);

        displayed_answers(area, perimeter, diagonal);
        }

    return 0;
}

//
//Function definitions
//

double compute_area(double lengthSideOne, double lengthSideTwo)
{
    double area;

    area = lengthSideOne * lengthSideTwo;

    return (area);
}



double compute_perimeter(double lengthSideOne, double lengthSideTwo)
{
    double perimeter;

    perimeter = (2 * lengthSideOne) + (2 * lengthSideTwo);

    return (perimeter);
}



double compute_diagonal(double lengthSideOne, double lengthSideTwo)
{
    double diagonal;

    diagonal = sqrt((lengthSideOne * lengthSideOne) + (lengthSideTwo * lengthSideTwo));

    return (diagonal);
}



void displayed_answers(double area, double perimeter, double diagonal)
{
    cout.setf (ios:: fixed);             // use fixed point notatioon
    cout.setf(ios::showpoint);           // always show the decimal
    cout.precision(1);                   // sets precision to one

    cout << endl;
    cout << " The area of the rectangle is " << area << endl;
    cout << " The perimeter of the rectangle is " << perimeter << endl;
    cout << " The diagonal of the rectangle is " << diagonal << endl;
}
