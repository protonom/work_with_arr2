#include <iostream>

using namespace std;

void fill_arr(int* mass, int size,int chois)
{
    int max;
    srand(time(NULL));
    if (chois == 0) {
        for (int i = 0; i < size; i++)
        {
            mass[i] = rand();
        }
    }
    else {
        cin >> max;
        for (int i = 0; i < size; i++)
        {
            mass[i] = rand() % max;
        }
    }
}

void show_arr(int* mass, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << mass[i] << ", ";
    }
}

void sortirate_arr(int* mass, int size) {
    bool flag = true;
    int reg = 0;
    while (flag)
    {
        flag = false;
        for (int i = 0; i < size - 1; i++) {
            if (mass[i] > mass[i + 1]) {
                reg = mass[i];
                mass[i] = mass[i + 1];
                mass[i + 1] = reg;
                flag = true;
            }
        }
    }
}

void quatro_arr(int* mass, int size, int size2) 
{
    int i = 0;
    int j = 0;
    for (i; i < size; i++) {
        for (j; j < size2; j++) {
            mass[i][j] = i + 1;
        }
    }
}
 
int main()
{
    const int SIZE = 50, SIZE2 = 50;
    int ARR[SIZE], ARR2[SIZE][SIZE2];
    int shois;
    cin >> shois;
    fill_arr(ARR,SIZE,shois);
    sortirate_arr(ARR, SIZE);
    show_arr(ARR, SIZE);

}
