#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare variables
    int r1, ng1, w1, r2, ng2, w2; // input variables
    int sum_r, sum_ng, sum_w; // answer variables
    int carry_ng, carry_w; // carry variable (ตัวทด)

    // enter area1
    printf("Enter area 1 in the format: rai-ngan-sq.wah: ");
    scanf("%d-%d-%d", &r1, &ng1, &w1);
    printf("Area 1: %d-%d-%d\n", r1, ng1, w1);

    // enter area 2
    printf("Enter area 2 in the format: rai-ngan-sq.wah: ");
    scanf("%d-%d-%d", &r2, &ng2, &w2);
    printf("Area 2: %d-%d-%d\n", r2, ng2, w2);

    // compute the total area
    // 100 wah = 1 ngan
    // 4 ngan = 1 rai
    sum_w = w1+w2;
    carry_w = sum_w/100; //ค่าที่จะทดขึ้นไปที่หลัก งาน
    sum_w = sum_w - carry_w*100; //ค่าที่จะนำมาเแสดงผลทีหลัก ตรว

    sum_ng = ng1 + ng2 + carry_w; //carry_w คือค่าที่ทดมาจากหลัก ตรว
    carry_ng = sum_ng/4; //ค่าที่จะทดขึ้นไปที่หลัก ไร่
    sum_ng = sum_ng - carry_ng*4; //ค่าที่จะนำมาแสดงผลที่หลัก งาน

    sum_r = r1 + r2 + carry_ng; // carry_ng คือค่าที่ทดมาจากหลัก งาน

    // display the result
    printf("Total area: %d-%d-%d", sum_r, sum_ng, sum_w);

    return 0;
}
