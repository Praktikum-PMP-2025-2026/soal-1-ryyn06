#include <stdio.h>
#define max_len 99

void sorting(float *arr[max_len], int len, float *SUM, float *AVG, float *Max, float *IDX){
    //menggunakan bubble sort

    float temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-i-1 ; j++)
        {
            if ((*arr[j] > (*arr[j+1])))
            {
                temp = (*arr[j]);
                *arr[j] = *arr[j+1];
                *arr[j+1] = temp;
            }
            
        }
        
    }

    *SUM = 0;

    for (int i = 0; i < len; i++)
    {
        *SUM += *arr[i];
    }

  

    *Max =  *arr[len-1];
    *IDX = *arr[0];
    *AVG = *SUM / len;


    printf("SUM %.0f\n", *SUM);
    printf("AVG %.2f\n", *AVG);
    printf("MAX %.0f\n", *Max);
    printf("IDX %.0f", *IDX );
    
}

int main(){
    float SUM, AVG, MAX,IDX;
    float arr[max_len];
    float *ptr[max_len];
    int len;

    scanf("%d", &len);

    for (int i = 0; i < len; i++) {
        scanf("%f", &arr[i]);
        
        ptr[i] = &arr[i];
    }
    printf("\n");

    sorting(ptr, len, &SUM, &AVG, &MAX, &IDX);

}
