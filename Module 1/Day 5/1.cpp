/*
1. Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.
*/
// surface area =2lw+2lh+2hw.
// volume =      lwh
#include<stdio.h>
struct box{
    int l,w,h;
};
void area(struct box *ptr){
    int area,volume;
    area=(2*(*ptr).l*(*ptr).w)+(2*(*ptr).w*(*ptr).h)+(2*(*ptr).l*(*ptr).h);
    volume=(*ptr).l*(*ptr).w*(*ptr).h;
    printf("area is %d\nvolume is %d\n ",area,volume);
}
int main(){
    struct box *x , y;
    x=&y;
    printf("Enter the length :");
    scanf("%d",&x->l);
    printf("Enter the width :");
    scanf("%d",&x->w);
    printf("Enter the height :");
    scanf("%d",&x->h);
    area(x);
    return 0;
}