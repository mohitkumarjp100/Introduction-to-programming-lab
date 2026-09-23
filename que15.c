#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    printf("enter your marks in subject-1,2,3,4,5(out of 100 in each)");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1+sub2+sub3+sub4+sub5;
      if(total >=450 && total <= 500)
    {
        printf("first division");
    }
      else if(total>=330 && total <= 449)
    {
        printf("second division ");
    }
       else if(total >=175 && total <= 329)
    {
        printf("third division");
    }
       else if(total >= 0 && total <= 174)
    {
        printf("failed");
    }
}
