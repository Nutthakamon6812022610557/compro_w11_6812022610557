#include<stdio.h>

float average(int a, int b, int c);

int main(){
    int Math, Physics, Chemistry;                                       
    printf("Enter Math score : ");                          //แสดง Enter Math score :
    scanf("%d", &Math);                                     // รับค่าเป็นจำนวนเต็มแล้วเก็บเป็น Math
    printf("Enter Physics score : ");                       //แสดง Enter Physics score :
    scanf("%d", &Physics);                                  // รับค่าเป็นจำนวนเต็มแล้วเก็บเป็น Physics
    printf("Enter Chemistry score : ");                     //แสดง Enter Chemistry score :
    scanf("%d", &Chemistry);                                // รับค่าเป็นจำนวนเต็มแล้วเก็บเป็น Chemistry

    float result = average(Math, Physics, Chemistry);
    printf("\nMath = %d\nPhysics = %d\nChemistry = %d\nAverage = %.2f", Math, Physics, Chemistry, result);

}

float average(int a, int b, int c){
    float av;
    av = (a+b+c)/3.0;
    return av;
}
/*
บรรทัดที่ 3 ประกาศฟังก์ชัน float average(int a, int b, int c); ไว้ก่อน main()
บรรทัดที่ 5 ประกาศฟังก์ชัน main()
บรรทัดที่ 6 ประกาศตัวแปรชนิดจำนวนเต็มชื่อ Math, Physics, Chemistry
บรรทัดที่ 14 สร้างตัวแปรชนิดทศนิยม ชื่อ result โดยให้มีค่าเท่ากับ ฟังก์ชัน average โดยดึงค่าจาก Math, Physics, Chemistry ที่เรียกเก็บค่ามา
บรรทัดที่ 15 แสดงผลหน้าจอ \nMath = %d\nPhysics = %d\nChemistry = %d\nAverage = %.2f โดยเรียกค่ามาจากตัวแปร Math, Physics, Chemistry, result
         และแสดงค่าเป็นจำนวนเต็ม จำนวนเต็ม จำนวนเต็ม ทศนิยมตามลำดับ
บรรทัดที่ 19 สร้างฟังก์ชัน float average(int a, int b, int c) โดยมีการเรียกใช้ค่าสามตัวแปรเป็นชนิดจำนวนเต็ม
บรรทัดที่ 20 สร้างตัวแปรภายในฟังก์ชันชนิดทศนิยม ชื่อ av
บรรทัดที่ 21 กำหนดให้ av = (a+b+c)/3
บรรทัดที่ 22 คืนค่า av
*/