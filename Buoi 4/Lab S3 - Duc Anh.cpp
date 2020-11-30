#include <stdio.h>

int main()
{
    float tien_gui = 4000;
    int so_nam = 4;
    float tien_lai = tien_gui;
    for(int i = 0; i < so_nam; i++){
        float lai = tien_lai * (8.0 /100.0);
        tien_lai += lai;
    }
    printf("Tien lai sau 4 nam = %f", tien_lai);
}
