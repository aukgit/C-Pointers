#include<stdio.h>
#include<math.h>
#include <conio.h> // for getch library files

/*------------------------------------------------
 *------------------------------------------------
 * |name           :   Alim Ul Karim
 * |email          :   alim@developers-organism.com
 * |works          :   Developers Organism
 * |blog           :   http://bit.ly/auk-blog
 * |linkedin       :   http://linkd.in/alim-ul-karim
 *------------------------------------------------
 *------------------------------------------------
 */

//Write Functions Above

int main(){
    int     x = 190;
    int     a=240, b = 530;

    int * pointer = (int *)malloc(10 * sizeof(int)) ; // null pointer takes two bytes

    int *p = &
    // 0 , 1 . ..
    // let's pointer is pointing to RAM address 500
    //

    printf("&pointer: %d , pointer: %d\n" , &pointer, pointer );
    printf("pointing index of 0(item 1): %d\n" , (pointer+0));
    printf("pointing index of 1(item 2): %d\n" , (pointer+1));



    getch();
    return 0;
}
