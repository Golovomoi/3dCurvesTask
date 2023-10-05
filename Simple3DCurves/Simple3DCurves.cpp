#include <iomanip>
#include <iostream>
#include <vector>
#include "headers/Circle.h"
#include "headers/Ellipse.h"
#include "headers/Helix.h"
#include <ctime>
#include <algorithm>

void printVector3(Vector3 v)
{
    std::cout << "( " << std::get<0>(v) << ", " << std::get<1>(v) << ", " << std::get<2>(v) << ")" << std::endl;
}

int main()
{
    std::srand(std::time(0));
    int n = 30;
    std::vector<BaseCurve*> firstSet;

    for (auto i = 0; i < n; i++){
        switch (std::rand() % 3 + 1) {
        case 1:
            firstSet.push_back(new Circle(rand()));
            break;
        case 2:
            firstSet.push_back(new Ellipse(rand(), rand()));
            break;
        case 3:
            firstSet.push_back(new Helix(rand(), rand()));
            break;
        }
    }

    for (auto i = 0; i < n; i++) {
        std::cout << i << " curve is " << firstSet[i]->GetTypeName() << std::endl;
        std::cout << i << " curve's 3d point is:         ";
        printVector3(firstSet[i]->Get3DPoint(M_PI_4));
        std::cout << i << " curve's first derivative is: ";
        printVector3(firstSet[i]->GetFirstDerivative(M_PI_4));
        std::cout << std::endl;
    }
    std::vector<Circle*> secondSet;
    
    double radiiSum = 0;
    for (auto i = 0; i < n; i++) {
        if (firstSet[i]->GetType() == 1) {
            // мы можем здесь спокойно привести указатель к классу наследнику т.к. мы кладем сюда только круги.
            Circle* CircleElement = dynamic_cast<Circle*>(firstSet[i]);
            
            //но на всякий случай проверим и если что сообщим
            if (CircleElement == NULL)
            {
                std::cout << "cast failed, logic is bad!";
            }
            secondSet.push_back(CircleElement);

            // Нужно посчитать сумму элементов, можно было бы это выполнить и в отдельном цикле, но т.к. элементы мы менять больше не будем, можно это сделать сразу.
            radiiSum += CircleElement->GetRadii();
        }

    }

    std::cout << "before sorting : ";
    for (auto i : secondSet) {
        std::cout << dynamic_cast<Circle*>(i)->GetRadii() << " ";
    }
    std::cout << std::endl;

    std::sort(secondSet.begin(), secondSet.end(), [&](Circle* first, Circle* second) -> bool
        {
            
            return (first->GetRadii() < second->GetRadii());
        });

    std::cout << "after sorting : ";
    for (auto i : secondSet) {
        std::cout << i->GetRadii() << " ";
    }
    std::cout << std::endl;

    std::cout << "circles radius sums are : " << radiiSum << std::endl;

}
