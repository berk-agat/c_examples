#include <stdio.h>
#include <stdlib.h>

int myAbs(int fark );
int findFurthest(int *arrayValues, int length, int targetValue);

int main() {
    int length = 10; // dizi boyutu
    int arrayValues[length]; // dizi tanýmlama

    // Diziyi kullanýcýdan al veya doldur
    printf("Diziyi girin:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arrayValues[i]);
    }

    int targetValue; 
    printf("targetValue degeri girin: ");
    scanf("%d", &targetValue);

    int absValue = findFurthest(arrayValues, length, targetValue);

    printf("targetValue degere en uzak eleman: %d\n", absValue);

    return 0;
}

// Kendi mutlak deger hesaplayýcýmýz
int myAbs(int val)
{
	int fark;
	if(val < 0)
	{
		fark =val * -1;
	}
	
	return fark;
}

// Belirli bir deðere en uzak dizi elemanýný bulan fonksiyon
int findFurthest(int *arrayValues, int length, int targetValue) {
    int absValue = arrayValues[0];
    int furthestDifference = myAbs(targetValue - arrayValues[0]);

    for (int i = 1; i < length; i++) {
        int fark = abs(targetValue - arrayValues[i]);
        if (fark > furthestDifference) {
            furthestDifference = fark;
            absValue = arrayValues[i];
        }
    }

    return absValue;
}
//11 22 33 44 55 66 77 -10 -90  0
