#include<stdio.h>

int main()
{
  
  int phy,che,math,bio,sp,eng,total;
  double avg;
  printf("Enter Marks of 5 subjects: ");
  
  scanf("%d%d%d%d%d",&phy,&che,&math,&bio,&sp);
  
  total=phy+che+math+bio+sp;
  printf("Total Marks :%d",total);
  
  
  avg=total/5;
   printf("Average Marks:%1f",avg);
    
    return  0;
}
