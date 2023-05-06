/** 
 * Created by author on 2023/5/6 16:38
*/
#include "iostream"
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl;
    cout << &arr[1] << endl;
    // 取数组中第二个元素的地址
    cout << arr + 1 << endl;
    // 为什么+1之后的地址和&arr[1]的地址一样？
    // 因为数组名代表数组的首地址，而数组中的元素是连续存放的，所以+1之后的地址和&arr[1]的地址一样
    // 为什么+1就可以取第二个元素的地址？
    // 因为数组中的元素是连续存放的，所以+1就可以取第二个元素的地址
    // 这个1指的是什么？
    // 这个1指的是数组中的元素的类型，这里是int，所以+1之后的地址就是+4

    int max_num = 0;
    for (int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if (arr[i] >= max_num){
            max_num = arr[i];
        }
    }
    cout << "max_num is " << max_num << endl;

    int tmp;
    int j = 0;
    for (int i=sizeof(arr)/sizeof(arr[0]) - 1; i >= 0; i--){
        tmp = arr[j];
        cout << "tmp is " << tmp << endl;
        arr[j] = arr[i];
        arr[i] = tmp;
        j++;
        if (j >= i){
            break;
        }
    }


    //将arr中的数组倒序输出，例如从1，2，3，4，5变成5，4，3，2，1



    for (int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << endl;
    }

    return 0;
}