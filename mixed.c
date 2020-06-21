//
//  Mixed Messages.c
//  
//
//  Created by Julien Jung on 20/06/2020.
//

#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    while (x < 5) {
        /* Insert candidate code below */
        if (y < 5) {
            x = x + 1;
            if (y < 3)
                x = x - 1;
        }
        /* Below only if y < 5 */
        y = y + 2;
        printf("%i%i ", x, y);
        x = x + 1;
    }
    return 0;
}
