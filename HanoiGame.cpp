#include <iostream>

int main()
{
    int array[3][3]
    {
        { 1,0,0 },
        { 2,0,0 },
        { 3,0,0 }
    };

    int layer, layer2;

    while (true)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << array[i][j] << "  ";
            }
            std::cout << std::endl;
        }
        std::cout << "어떻게 움직일까요? ";
        std::cin >> layer >> layer2;

        if (layer == 1)
        {

        }
    }

}