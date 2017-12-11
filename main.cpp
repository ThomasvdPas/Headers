// #include "mbed.h"
// #include "test.h"
#include <iostream>
using namespace std;
#include "Time.h"

// int add(int x, int y)
// {
//     return x + y;
// }

int main() {
        // while (true) {
        printf("%s\n","Hallo world" );
        // test print(void);
        Time t1(10, 50, 59);
        t1.print(); // 10:50:59
        Time t2;
        t2.print(); // 06:39:09
        t2.setTime(6, 39, 9);
        t2.print(); // 06:39:09

        if(t1.equals(t2))
                cout << "Two objects are equal\n";
        else
                cout << "Two objects are not equal\n";

        // led1 = !led1;
        // wait(1);
        // }
        return 0;
}
