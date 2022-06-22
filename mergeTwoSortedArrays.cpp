#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 3, 5, 7, 9};
    int a2[4] = {2, 4, 6, 8};
    int fin[9] = {0};
    
    for (int i=0; i<4; i++)
    {
        for(int j=i; j<4; j++)
        {
            if(a[i] < a2[j])
            {
                fin[i+j] = a[i];
                fin[i+j+1] = a2[j];
            }
            else
            {
                fin[i+j] = a2[j];
                fin[i+j+1] = a[i];
            }
            break;
        }
    }
    for(int p = 4; p<5; p++)
    {
        fin[8] = a[p];
        cout << "Fin: " << a[p] << endl;
    }
    for (int x=0; x<9; x++)
    {
        cout << "Fin: " << fin[x] << endl;
    }

    return 0;
}
