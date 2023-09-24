#include <stdio.h>

typedef struct 
{
    enum { RECT, CIRCLE } type;
    union 
    {
        struct{
            double height;
            double width;

        } rectangle;
        struct 
        {
            double radius;
        } circle;
        
    };
    
} figure;

double area(figure* myFigure)
{

}

int main()
{
    
}