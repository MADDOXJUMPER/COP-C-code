#include <stdio.h>

int main()
{
    int exam1, exam2, exam3, tscore, avgscore;
    char grade;
    
    printf("Score 1:");
    scanf("%d", &exam1);
    
    printf("Score 2:");
    scanf("%d", &exam2);
    
    printf("Score 3:");
    scanf("%d", &exam3);
    
    tscore = exam1 + exam2 + exam3;
    avgscore = tscore / 3;
    
    
    if (avgscore >= 90)
        grade = 'A';
    
    else if (avgscore >= 80)
      grade = 'B';
        
    else if (avgscore >= 70)
        grade = 'C';
        
    else if (avgscore >= 60)
        grade = 'D';
        
    else
        grade = 'F';
        
    printf("Total score: %d\n", tscore);
    printf("Average score: %d\n", avgscore);
    printf("Grade:%c", grade);
    

    return 0;
}