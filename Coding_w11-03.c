#include<stdio.h>

void inputScores(float arr[3][3]);             // เรียกใช้ฟังก์ชัน inputScores ไว้ก่อน main โดยมีการเรียกใช้ค่าตัวแปรชนิดทศนิยม ชื่อ arr[3][3] โดยกำหนดขนาดเป็น 3*3
void printTable(float arr[3][3]);              //เรียกใช้ฟังก์ชัน printTable ไว้ก่อน main โดยมีการเรียกใช้ค่าตัวแปรชนิดทศนิยม ชื่อ arr[3][3] โดยกำหนดขนาดเป็น 3*3
void printAverage(float arr[3][3]);            //เรียกใช้ฟังก์ชัน printAverage ไว้ก่อน main โดยมีการเรียกใช้ค่าตัวแปรชนิดทศนิยม ชื่อ arr[3][3] โดยกำหนดขนาดเป็น 3*3

int main(){
    float scores[3][3];                       // ประกาศตัวแปรชนิดทศนิยมที่เป็นarray ชื่อ scores[3][3] มีขนาด 3*3;
    inputScores(scores);                      // เรียกใช้ฟังก์ชัน inputScores โดยมีการเรียกค่าจากตัวแปร scores
    printTable(scores);                       // เรียกใช้ฟังก์ชัน printTable โดยมีการเรียกค่าจากตัวแปร scores
    printAverage(scores);                     // เรียกใช้ฟังก์ชัน printAverage โดยมีการเรียกค่าจากตัวแปร scores
    return 0;                                 // คืนค่าโปรแกรมเป็น 0
}

void inputScores(float arr[3][3]){           //สร้างฟังก์ชัน void inputScores(float arr[3][3]) คือจะมีการเรียกใช้ค่าที่เป็นทศนิยมและเป็นarray
    for (int i = 0; i < 3; i++)               // for loop ให้ i เริ่มต้นเท่ากับ 0 เงื่อนไขการวนซ้ำคือ i < 3 และค่า i เพิ่มขึ้นทีละหนึ่ง
    {
        printf("Enter scores for Student %d :\n", i+1); //แสดง "Enter scores for Student ที่ %d เริ่มจาก 0+1 = 1 ไปเรื่อยๆจนออกนอกเงื่อนไข ที่นี้คือ 3
        printf("   Math : ");                           //แสดง Math
        scanf("%f", &arr[i][0]);                        // รับค่า ที่ arr [i][0]
        printf("   Physics : ");                        //แสดง Physics
        scanf("%f", &arr[i][1]);                        // รับค่า ที่ arr [i][1]
        printf("   Chemistry : ");                      //แสดง Chemistry
        scanf("%f", &arr[i][2]);                        // รับค่า ที่ arr [i][2]
    }
}

void printTable(float arr[3][3]){                       //สร้างฟังก์ชัน printTable โดยจะมีการเรียกใช้ค่าตัวแปร arr[3][3]
    printf("Score Table :\n");                          // แสดง "Score Table
    printf("Student    Math    Physics    Chemistry\n"); //แสดง Student    Math    Physics    Chemistry
    for (int i = 0; i < 3; i++)                         //คำสั่ง for loop โดยให้ i เริ่มต้น = 0 เงื่อนไขการวนซ้ำ คือ i น้อยกว่า 3 และให้ค่า i เพิ่มขึ้นทีละ 1
    {
        printf("%-10d %-7.2f %-10.2f %-8.2f\n", i+1, arr[i][0], arr[i][1], arr[i][2]); 
        // แสดงผลหน้าจอ %-10d %-7.2f %-10.2f %-8.2f\n โดยเรียกค่ามาจากตัวแปร i+1, arr[i][0], arr[i][1], arr[i][2] ตามลำดับ
    }
    
}

void printAverage(float arr[3][3]){                                 //สร้างฟังก์ชัน printAverage โดยจะมีการเรียกใช้ค่าตัวแปร arr[3][3]
    printf("Average per subject:\n");                               // แสดง Average per subject
    printf("Math : %.2f\n", (arr[0][0]+arr[1][0]+arr[2][0])/3.0);   //แสดง Math : %.2f\n โดยเรียกค่ามาจากตัวแปร (arr[0][0]+arr[1][0]+arr[2][0])/3.0
    printf("Physics : %.2f\n", (arr[0][1]+arr[1][1]+arr[2][1])/3.0);//แสดง Physics : %.2f\n โดยเรียกค่ามาจากตัวแปร (arr[0][1]+arr[1][1]+arr[2][1])/3.0
    printf("Chemistry : %.2f\n", (arr[0][2]+arr[1][2]+arr[2][2])/3.0);//แสดง Chemistry : %.2f\n โดยเรียกค่ามาจากตัวแปร (arr[0][2]+arr[1][2]+arr[2][2])/3.0
}