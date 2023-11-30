#include <stdio.h>
#include <stdlib.h>

  struct student {
  
  int id;
  char name[10];
  float grade;
  
  
};


int main(int argc, char *argv[])
{
    struct student s1 ={123, "SEOYEON", 4.3};
    
    //다른값변경
    s1.id = 456;
    s1.name[0] = 'J';
    s1.grade = 4.5;
    //출력 
    printf("id : %d, name : %s, grade: %f",s1.id, s1.name, s1.grade);

  system("PAUSE");	
  return 0;
}
