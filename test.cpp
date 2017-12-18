#include "test.h"

int Test::print(void){
        printf("%s\n","hallo world1");
        return 0;
}

int Test::echo(void) {
        printf("%s\n","hallo world2");
        // pc.printf("Hello!\n");
        // pc.printf("Echoes back to the screen anything you type\n");
        // while(1) {
        //led1 = !led1;

        // char c = my_serial.getc();
        // my_serial.printf("%c\r\n", c);

        // my_serial.putc(my_serial.getc());
        // char c2 = pc.getc();
        // my_serial.printf("My Senix is working %c\r\n", c2);

        // printf("%c\n", c);
        // wait(1);
        // pc.putc(pc.getc());
        // }
        return 0;
}

// int main(void) {
//   echo();
//   return 0;
// }
