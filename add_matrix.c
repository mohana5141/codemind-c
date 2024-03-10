/*#include <stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&i,&j);
    int ma1[i][j];
    int ma2[i][j];
   for(a=0;a<i;a++){
      for(b=0;b<j;b++){
          scanf("%d",&ma1[a][b]);
       }
   } 
       for(a=0;a<i;a++){
      for(b=0;b<j;b++){
          scanf("%d",&ma2[a][b]);
        }
      } 
       for(a=0;a<i;a++){
      for(b=0;b<j;b++){
          printf("%d ",ma1[a][b]+ma2[a][b]);
       }
          printf("\n");
      } 
   
}*/
 /*#include <stdio.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
           printf("*");
       }
       
       printf("\n");
    }
    printf("\n");
    for(i=n-1;i>=1;--i){
        for(j=i;j<=i;++j){
            printf("*");
        }
    
        printf("\n");
    }*} */ 
//structure are user defined datatypes 
/*#include <stdio.h>
struct student{
   char name[20];
   int age;
};
int main()
{
   struct student s1;
  // printf("Name is :%s\nAge is :%d",s1.name,s1.age);
   //printf("Age is :%d",s1.age);
   printf("enter name:");
   scanf("%[^\n]*%s",s1.name);
   printf("enter age:");
   scanf("%d",&s1.age);
   printf("--------\n");
   printf("%s\t%d\n",s1.name,s1.age)
}*/	    
 //#include <stdio.h>
/*struct rectangle{
	float len,wid,area,peri;
};
typedef struct rectangle rec;
 int main()
 {
   rec r1;
    rec r2;
    printf("enter len of r1:");
    scanf("%f",&r1.len);
	printf("enter wid of r1:");
	scanf("%f",&r1.wid);
	r1.area= r1.len*r1.wid;
	r1.peri = 2*(r1.len+r1.wid);
	printf("%.2f\n%.2f",r1.area,r1.peri);
}*/ 
/* struct student{
 	char name[100];
 	int age;
 };   
typedef struct student STU;
int main()
{
  STU arr[3];
  int i;
  for(i=0;i<3;i++){
  	printf("\nenter a name:",i+1);
  	scanf("%s",arr[i].name);
  	printf("\nenter a age :",i+1);
  	scanf("%d",&arr[i].age);
  	printf("%s\n%d",arr[i].name,arr[i].age);
}
} */ 
/*struct employ{
	char name[20];
	char organiz[100];
	int year_of_join;
	int salary;
};    
typedef struct employ emp;
int main()
{
   emp arr[6];
   int i;
   for(i=0;i<6;i++){
   	printf("enter a name:",i+1);
   	scanf("%[^\n]c",arr[i].name);
   	printf("enter a organiz:");
   	scanf("%[^\n]c",arr[i].organiz);
   	printf("\nenter a year_of_join:",i+1);
   	scanf("%d",&arr[i].year_of_join);
   	printf("\nenter a salary:",i+1);
   	scanf("%d",&arr[i].salary);
   }
    printf("%s\n%s\n%d\n%d",arr[i].name,arr[i].organiz,arr[i].year_of_join,arr[i].salary);
*/
/*#include <stdio.h>
#include <math.h>
int main()
{
  double a,b,c;
  scanf("%lf %lf %lf",&a,&b,&c);
  double root1,root2,realpart,imagpart;
   double discriminant = b*b-4*a*c;
   //if roots are real and different roots
   if(discriminant>0){
   	root1=(-b+sqrt(discriminant))/(2*a);
   	root2=(-b-sqrt(discriminant))/(2*a);
   	printf("root1 =%.2lf and root2=%.2lf",root1,root2);
    }//if roots are real and equal
    else if(discriminant==0){
    root1=root2 = -b/(2*a);
	printf("root1=root2=%.2lf",root1);	
    }//if roots are not real
     else{
      	realpart = -b/(2*a);
      	imagpart = sqrt(-discriminant)/(2*a);
      	printf("root1= %.2lf+%.2lfi and root2=%.2lf-%.2lfi",realpart,imagpart,realpart,imagpart);
        }
        return 0;

}*/

#include <stdio.h>
#include <math.h>
int main()
{
  int n,last;
  printf("enter a  number:");
  scanf("%d",&n);
  int temp=n;
  int arm=0;
  int digi_cnt =(int)log10(n)+1;
  while(temp!=0){
  	last = temp%10;
  	arm = arm+pow(last,digi_cnt);
  	temp/=10;
    }
  	
  if(arm==n){
  	printf("It is a armstrong number");
  } else {
  	printf("it is not an armstrong number");
  }
}
    
    
    
	









   
    
    
    
    
    
    
    
    
    
