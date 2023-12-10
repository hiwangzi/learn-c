#include <stdio.h>
int main()
{
    int grades[][5] = {
        {98, 97, 88, 100, 30},
        {66, 77, 33, 45, 100}};
    for (int stu_id = 0; stu_id < 5; stu_id++)
    {
        printf("Student#%d ", stu_id);
        float average = (grades[0][stu_id] + grades[1][stu_id]) / 2.0;
        printf("Mathematics: %d, Physics: %d, Average: %.2f.\n", grades[0][stu_id], grades[1][stu_id], average);
    }
}