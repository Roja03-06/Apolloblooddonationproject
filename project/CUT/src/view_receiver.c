/*
 * FILE : view_receiver.c
 
 *DESCRIPTION: This file helps the admin to view the details of receiver.

 */
#include<stdio.h>
#include<stdlib.h>
#include<macros.h>
#include<struct.h>
#include<string.h>
void view_receiver( )
{
 FILE *fp;
 fp=fopen("../data/receiver.txt","r");
 if(fp==NULL)
 {
  printf("File doesnot exits");
 }
 else
 {
  char rname[MAX],bgroup[MAX};
         int age;
         long long aadharno;
  printf("\n*************************************************\n");
  printf(" DETAILS OF RECEIVER ");
  printf("\n**************************************************\n");
  r_reg *start=NULL;
  printf("\n%20s%-20s%-20s%-20s","Aadhar no","Receiver Name","Age","Bloof Group");
  scanf(fp,"%lld%s%d%s",&aadharno,rname,,&age,bgroup);
  while(!feof(fp))
  {
   printf("\n%20lld%-20s%-20d%s ",aadharno,rname,age,bgroup);
   fscanf(fp,"%lld%s%d%s",aadharno,rname,&age,bgroup);
  }
  fclose(fp);
          }
          menu_admin();
}
