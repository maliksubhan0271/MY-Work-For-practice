#include<stdio.h>
#include<conio.h>
const int per_sub_marks=100;
const int tottal_sub=3;
const int total_sub_marks=300;
void main()
{
  
    float roll_no;
     printf("roll no: ");
    scanf("%d",&roll_no);
    int pf_marks,ic_marks,cg_marks;
    printf("pf marks= ");
    scanf("%d",&pf_marks);
    printf("ic marks= ");
    scanf("%d",&ic_marks);
    printf("cg marks = ");
    scanf("%d",&cg_marks);
    int get_marks;
     get_marks =pf_marks+ ic_marks+ cg_marks;
     printf("get_marks %d",get_marks);
    float average;
    average= get_marks*100/total_sub_marks;
    printf(" average= %d",average);

    //average ni lany ho rahe
    //or roll no be ni point ma lany ho raha

}