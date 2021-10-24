#include <stdio.h>

int main()
{
    char name[100],nominee_name[100],relationship_of_nominee[100],nominee_email[100],,occupation[100];
    int nominee_age,nominee_phone,nominee_aadhar;
    printf("Enter your NAME         :");
    scanf("%s",name);
    printf("Enter your NOMINEE NAME :");
    scanf("%s",nominee_name);
     printf("Enter your NOMINEE AGE :");
    scanf("%d",&nominee_age);
    printf("Enter your RELATIONSHIP :");
    scanf("%s",relationship_of_nominee);
    printf("Enter your NOMINEE AGE  :");
    scanf("%d",&nominee_age);
    printf("Enter your AADHAR       :");
    scanf("%d",&nominee_aadhar);
    printf("Enter your ADDRESS      :");
    scanf("%s",adress);
    printf("Enter your PHONE NUMBER :");
    scanf("%d",&nominee_phone);
     printf("Enter your E-MAIL      :");
    scanf("%s",nominee_email);
    printf("\n\n\t----DETAILS----\n");
    printf("NAME          : %s",name);
    printf("NOMINEE NAME  : %d",nominee_name);
    printf("AGE           : %d",nominee_age);
    printf("RELATIONSHIP  : %s",relationship_of_nominee);
    printf("AADHAR        : %d",nominee_aadhar);
    printf("PHONE         : %d",nominee_phone);
    printf("E-MAIL        : %s",nominee_email);
}

