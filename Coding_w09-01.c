#include<stdio.h>

int main(){

    int start_num, stop_num;

    printf("Enter start number:");
    scanf("%d", &start_num);
    printf("Enter stop number:");
    scanf("%d", &stop_num);

    for (int i=start_num; i <= stop_num; i++)
    {
        if (start_num < stop_num)
        {
            printf("%d ", i);
        }      

    }

    while (start_num == stop_num)
    {
        printf("Your Start number is equal to Stop number, please try again!\n");
        printf("Enter start number:");
        scanf("%d", &start_num);
        printf("Enter stop number:");
        scanf("%d", &stop_num);

        for (int i=start_num; i <= stop_num; i++)
    {
        if (start_num < stop_num)
        {
            printf("%d ", i);
        }      

    }

    }

    while (start_num > stop_num)
    {
        printf("Your Start number is greater than Stop number, please try again!\n");
        printf("Enter start number:");
        scanf("%d", &start_num);
        printf("Enter stop number:");
        scanf("%d", &stop_num);

        for (int i=start_num; i <= stop_num; i++)
    {
        if (start_num < stop_num)
        {
            printf("%d ", i);
        }      

    }

    }

    printf("\nThank you.");

    return 0;
    
}

/*
---------------------------------------------------------------------------| คำอธิบาย |---------------------------------------------------------------------------
บรรทัดที่ 1 นำเข้าไลบารี stdio.h
บรรทัดที่ 3 ประกาศฟังก์ชัน main()
บรรทัดที่ 5 ประกาศตัวแปรชนิดจำนวนเต็ม ชื่อ start_num และ stop_num
บรรทัดที่ 7 แสดงผลหน้าจอ Enter start number: เพื่อเก็บค่า start_num
บรรทัดที่ 8 เก็บค่า start_num ในรูปแบบจำนวนเต็ม
บรรทัดที่ 9 แสดงผลหน้าจอ Enter stop number: เพื่อเก็บค่า stop_num
บรรทัดที่ 10 เก็บค่า stop_num ในรูปแบบจำนวนเต็ม
บรรทัดที่ 12 ใช้คำสั่ง for loop โดยประกาศค่า i และให้มีค่าเท่ากับ start_num กำหนดเงื่อนไขการวนซ้ำ คือ i น้อยกว่าหรือเท่ากับ stop_num และ อัปเดตค่าตัวแปร i โดยการ+1
บรรทัดที่ 14 ใช้คำสั่งเงื่อนไข if โดยให้เงื่อนไขคือ start_num < stop_num
บรรทัดที่ 16 แสดงผลหน้าจอเป็นค่า i
บรรทัดที่ 21 ใช้คำสั่ง while loop โดยมีเงื่อนไขเป็น start_num เท่ากับ stop_num
บรรทัดที่ 23 แสดงผลหน้าจอ Your Start number is equal to Stop number, please try again!
บรรทัดที่ 24 แสดงผลหน้าจอ Enter start number: เพื่อเก็บค่า start_num
บรรทัดที่ 25 เก็บค่า start_num ในรูปแบบจำนวนเต็ม
บรรทัดที่ 26 แสดงผลหน้าจอ Enter stop number: เพื่อเก็บค่า stop_num
บรรทัดที่ 27 เก็บค่า stop_num ในรูปแบบจำนวนเต็ม
บรรทัดที่ 29 ใช้คำสั่ง for loop โดยประกาศค่า i และให้มีค่าเท่ากับ start_num กำหนดเงื่อนไขการวนซ้ำ คือ i น้อยกว่าหรือเท่ากับ stop_num และ อัปเดตค่าตัวแปร i โดยการ+1
บรรทัดที่ 31 ใช้คำสั่งเงื่อนไข if โดยให้เงื่อนไขคือ start_num < stop_num
บรรทัดที่ 33 แสดงผลหน้าจอเป็นค่า i
บรรทัดที่ 40 ใช้คำสั่ง while loop โดยมีเงื่อนไขเป็น start_num มากกว่า stop_num
บรรทัดที่ 42 แสดงผลหน้าจอ Your Start number is greater than Stop number, please try again!
บรรทัดที่ 43 แสดงผลหน้าจอ Enter start number: เพื่อเก็บค่า start_num
บรรทัดที่ 44 เก็บค่า start_num ในรูปแบบจำนวนเต็ม
บรรทัดที่ 45 แสดงผลหน้าจอ Enter stop number: เพื่อเก็บค่า stop_num
บรรทัดที่ 46 เก็บค่า stop_num ในรูปแบบจำนวนเต็ม
บรรทัดที่ 48 ใช้คำสั่ง for loop โดยประกาศค่า i และให้มีค่าเท่ากับ start_num กำหนดเงื่อนไขการวนซ้ำ คือ i น้อยกว่าหรือเท่ากับ stop_num และ อัปเดตค่าตัวแปร i โดยการ+1
บรรทัดที่ 50 ใช้คำสั่งเงื่อนไข if โดยให้เงื่อนไขคือ start_num < stop_num
บรรทัดที่ 52 แสดงผลหน้าจอเป็นค่า i
บรรทัดที่ 59 เมื่อจบการวนซ้ำ ให้แสดงผลบนหน้าจอว่า Thank you.
บรรทัดที่ 61 คืนค่าโปรแกรมเป็น 0
------------------------------------------------------------------------------------
*/