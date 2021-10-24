#include <stdio.h>

int main()
{
    char name[100],father_name[100],mother_name[100],email[100],adress[100],blood[100];
    int rollno,age,phone,aadhar;
    printf("Enter your NAME         :");
    scanf("%s",name);
    printf("Enter your ROLLL NO     :");
    scanf("%d",&rollno);
     printf("Enter your AGE         :");
    scanf("%d",&age);
    printf("Enter your FATHER NAME  :");
    scanf("%s",father_name);
    printf("Enter your MOTHER NAME  :");
    scanf("%s",mother_name);
    printf("Enter your BLOOD GROUP  :");
    scanf("%s",blood);
    printf("Enter your AADHAR       :");
    scanf("%d",&aadhar);
    printf("Enter your ADDRESS      :");
    scanf("%s",adress);
    printf("Enter your PHONE NUMBER :");
    scanf("%d",&phone);
     printf("Enter your E-MAIL      :");
    scanf("%s",email);
    printf("\n\n\t----DETAILS----\n");
    printf("NAME          : %s",name);
    printf("ROLL NO       : %d",rollno);
    printf("AGE           : %d",age);
    printf("FATHER NAME   : %s",father_name);
    printf("MOTHER NAME   : %s",mother_name);
    printf("BLOOD         : %s",blood);
    printf("AADHAR        : %d",aadhar);
    printf("ADRESS        : %s",adress);
    printf("PHONE         : %d",phone);
    printf("E-MAIL        : %s",email);
}
