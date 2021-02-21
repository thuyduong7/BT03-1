#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int row = x - 1, column = y - 1, number = 1, count = 0;
    int a[x][y];
    while (true){
        for (int j = count; j <= column; j++) a[count][j] = number++;
        if (number >= x*y) break;
        for (int i = count+1; i <= row; i++) a[i][column] = number++;
        if (number >= x*y) break;
        for (int j = column-1; j >= count; j--) a[row][j] = number++;
        if (number >= x*y) break;
        for (int i = row-1; i > count; i--) a[i][count] = number++;
        if (number >= x*y) break;
        count++;
        row--;
        column--;
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
