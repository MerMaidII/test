#include <iostream>


void outTab(int* tab, int max);
void swapTab(int* tab1, int* tab2, int max);

int main() {

const int max = 3;

int tab1[max] = {1,2,3};
int tab2[max] = {4,5,6};

std::cout << "PRZED" << std::endl;
outTab(tab1, max);
outTab(tab2, max);

swapTab(tab1, tab2, max);

std::cout << std::endl;
std::cout << "PO" << std::endl;
outTab(tab1, max);
outTab(tab2, max);

}


void outTab(int* tab, int max)
{
    for (int i = 0; i < max; i ++)
        std::cout << *(tab + i) << '\t';
}

void swapTab(int* tab1, int* tab2, int max)
{
    for (int i = 0; i < max; i++)
        {
            int mem = *(tab1 + i);
            *(tab1 + i) = *(tab2 + i);
            *(tab2 + i) = mem;
        }
}