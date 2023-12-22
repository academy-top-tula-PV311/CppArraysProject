#include <iostream>


void func(int array[], int size)
{
    array[0] = -100;
}

void ArrayPrint(const int array[], int size)
{
    for (int i{}; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}


int main()
{
    //std::cout << time(nullptr) << "\n";

    srand(time(nullptr));

    const int size{ 5 };
    int array[size];
    
    for (int i{}; i < size; i++)
        array[i] = rand() % 100;

    ArrayPrint(array, size);

    func(array, size);

    ArrayPrint(array, size);


    //
    /*const int count{ 5 };
    int students[count];
    for (int i{}; i < count; i++)
    {
        std::cout << "input label of " << i + 1 << " student: ";
        std::cin >> students[i];
    }

    double summa{};
    for (int i{}; i < count; i++)
        summa += students[i];
    std::cout << "labels avg = " << summa / count << "\n";*/


}
