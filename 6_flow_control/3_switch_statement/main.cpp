#include <iostream>
#include <string>

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main(){

    // switch expressions must have an integral type/ enum
    // e.g. int, long, unsigned short, etc

    int tool {Eraser};

    /* switch (Pen)
    {
        case Pen:
            std::cout << "Active tool is pen" << std::endl;
            break;
        case Marker:
            std::cout << "Active tool is marker" << std::endl;
            break;
        case Eraser:
            std::cout << "Active tool is eraser" << std::endl;
            break;
        case Rectangle:
            std::cout << "Active tool is rectangle" << std::endl;
            break;
        case Circle:
            std::cout << "Active tool is circle" << std::endl;
            break;
        case Ellipse:
            std::cout << "Active tool is ellipse" << std::endl;
            break;
        default:
            std::cout << "Can't match any tools" << std::endl;
            break;
    } */

    

    switch (tool)
    {
        case Pen:
            std::cout << "Active tool is pen" << std::endl;
            break;
        case Marker:
            std::cout << "Active tool is marker" << std::endl;
            break;
        case Eraser:
        case Rectangle:
        case Circle:
            std::cout << "Drawing a shape" << std::endl;
            break;
        case Ellipse:
            std::cout << "Active tool is ellipse" << std::endl;
            break;
        default:
            std::cout << "Can't match any tools" << std::endl;
            break;
    }

    /* std::cout << "Moving on" << std::endl;

        std::string name {"Michael"};

        switch (name)
        {
        case "Michael":
            std::cout << "Hello Michael!";
            break;
        
        default:
            break;
    } */

    return 0;
}