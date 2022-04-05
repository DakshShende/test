
#ifndef PLB_DOT_H    /* These are "include guard" it helps with multiple file addition */
#define PLB_DOT_H    /* Adding a header file twice causes problems*/
                     

#define limit 10
#define  b 70 
#define EMPLOYEE_PERCENT 12.5f
#define EMPLOYER_PERCENT 12.0f

struct add
{
    char name[50];
    
}; 

float grocery;
float recharge;
float commute;
float travel;
float expenses;
float fees;
float elec;
float salary;

float income;
int i,n;
float totcredit;
float totdebit;
float tot_amt;
char name[b];



void output();
void input();
void dash();

void analysis();



#endif
