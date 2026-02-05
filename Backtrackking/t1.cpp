#include <stdio.h>
#include <math.h>   // เพิ่มเพื่อใช้ฟังก์ชัน abs() (ค่าสัมบูรณ์)
#include <stdlib.h> // เพิ่มเพื่อใช้ฟังก์ชัน abs()

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ฟังก์ชันใหม่: ตรวจสอบแนวทแยง
// ถ้า X[i] คือตำแหน่งคอลัมน์ของควีนในแถวที่ i
int check(int X[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            // เช็คว่าแนวทแยงชนกันหรือไม่
            // สูตร: |row1 - row2| == |col1 - col2|
            if (abs(i - j) == abs(X[i] - X[j]))
            {
                return 0; // ไม่ผ่าน (กินกันเอง)
            }
        }
    }
    return 1; // ผ่าน (ปลอดภัย)
}

void permute(int X[], int start, int end)
{
    if (start == end)
    {
        // **จุดที่แก้**: ก่อนปริ้นท์ ต้องเช็คเงื่อนไขแนวทแยงก่อน
        if (check(X, end))
        {
            printf("Solution: ");
            for (int i = 1; i <= end; i++)
            {
                printf("%d ", X[i]);
            }
            printf("\n");
        }
        return;
    }

    for (int i = start; i <= end; i++)
    {
        swap(&X[start], &X[i]);
        permute(X, start + 1, end);
        swap(&X[start], &X[i]);
    }
}

int main()
{
    // **จุดที่แก้**: เปลี่ยน n เป็น 4 และเตรียม Array สำหรับ 4 ตัว
    int n = 4;
    int X[] = {-1, 1, 2, 3, 4}; // index 0 ไม่ใช้, เริ่มใช้ที่ index 1-4

    permute(X, 1, n);

    return 0;
}