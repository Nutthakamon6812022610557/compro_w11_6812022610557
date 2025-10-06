#include<stdio.h>

void inputAndShow(){
    int Math, Physics, Chemistry;
    printf("Enter Math : ");
    scanf("%d", &Math);
    printf("Enter Physics : ");
    scanf("%d", &Physics);
    printf("Enter Chemistry : ");
    scanf("%d", &Chemistry);

    printf("Scores : Math = %d, Physics = %d, Chemistry = %d", Math, Physics, Chemistry);
}

int main(){
    inputAndShow();
}
/*
บรรทัดที่ 1 เรียกใช้ไลบารี stdio.h
บรรทัดที่ 3 ประกาศฟังก์ชัน void inputAndShow()
บรรทัดที่ 4 ประกาศตัวแปรชนิดจำนวนเต็มชื่อ Math Physics Chemistry
บรรทัดที่ 5 แสดงผลหน้าจอ Enter Math :
บรรทัดที่ 6 เก็บค่าชนิดจำนวนเต็มในตัวแปร Math
บรรทัดที่ 7 แสดงผลหน้าจอ Enter Physics :
บรรทัดที่ 8 เก็บค่าชนิดจำนวนเต็มในตัวแปร Physics
บรรทัดที่ 9 แสดงผลหน้าจอ Enter Chemistry :
บรรทัดที่ 10 เก็บค่าชนิดจำนวนเต็มในตัวแปร Chemistry
บรรทัดที่ 12 แสดงผลหน้าจอ Scores : Math = %d, Math = %d, Chemistry = %d โดยเรียกค่ามาจากตัวแปร Math, Physics, Chemistry ตามลำดับ
บรรทัดที่ 15 สร้างฟังก์ชัน main()
บรรทัดที่ 16 เรียกใช้ฟังก์ชัน inputAndShow()
*/