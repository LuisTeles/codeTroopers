#include <iostream>
using namespace std;
 int main()
 {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    int sum = 0;

    for (int i = x + 1; i < y; i++) { //muito importante que i = x + 1 para que o valor de x inicial nao seja levado em consideração na soma
        if (i%2 != 0)
        {
            sum += (i);
        }
    }

    cout << sum << endl;

    return 0;
 }
