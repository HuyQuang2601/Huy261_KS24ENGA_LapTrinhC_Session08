#include <stdio.h>

int main(){
    int array[] = {3, 3, 2, 3, 5, 5, 2, 6, 3, 4};
    int n = sizeof(array) / sizeof(array[0]); 

    int maxCount= 0, maxItem;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++){
            if (array[i] == array[j]){
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxItem = array[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: %d\n", maxItem);
    printf("So lan xuat hien: %d\n", maxCount);
    return 0;
}
