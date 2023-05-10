/** 
 * Created by author on 2023/5/9 18:43
*/
#include "iostream"

using namespace std;






void swapp1(int *array, int len){
    int *p = array;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

void swapp2(int array[], int len){
    int *p = array;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {4, 2, 8, 0, 5, 7, 1, 3, 9, 6};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int *p1 = arr1;
    swapp1(arr1, len1);
    for (int i = 0; i < len1; i++) {
        cout << *(p1 + i) << " ";
    }

    int arr2[] = {4, 2, 8, 0, 5, 7, 1, 3, 9, 6};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int *p2 = arr2;
    swapp2(arr2, len2);
    for (int i = 0; i < len2; i++) {
        cout << *(p2 + i) << " ";
    }
    return 0;
}