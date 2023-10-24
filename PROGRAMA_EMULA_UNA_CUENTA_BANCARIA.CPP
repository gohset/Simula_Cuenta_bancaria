//Emulacion de una cuenta bancaria (Deposito y Retiro).
#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=0,c=0,su=0,res=0,op=1;
int n1=0,n2=0;
clrscr();
while(op<3)
{
printf("\t\t \t\tPROGRAMA <<<< SET 1.0.9 >>>>\n");
printf("\t\t\t$$$$$$$$$$ BIENVENIDO A TU CUENTA DE AHORRO$$$$$$$$$$ \n\n\n");
printf("\t\t\t ?????????????? BANCK SECURITY ?????????????\n\n");
printf("OPCION ..... 1= DEPOSITO:\n");
printf("OPCION ......2= RETIRO:\n");
printf("OPCION ......3= SALIR: \n");
printf("Ingrese la opción      ");
scanf("%i",& op);
switch(op)
{
case 1:
printf("\t\t\t\t<<<<<<<      DEPOSITO    >>>>>>>>>>:\n");
printf("Ingrese la cantidad que desea ingresar  ");
scanf("\n%i",& a);
if(a<10000)
{
su=su+a;
}
else
{
printf("El linite maximo de ingreso es << $ 10.000 >> \n");
printf("Porfabor  vuelva a ingresar \n");
}
printf("Usted actualmente tiene:    %i\n",su);
break;
case 2:
printf("\t\t\t\t<<<<<<<<<    RETIRO    >>>>>>>>>>>>:\n");
printf("Ingrese lo que desea retirar  ");
scanf("\n%i",& b);
if(b<su)
{
res=0;
res=su-b;
}
printf("Su saldo es de: %i",res);
printf("\n");
if(b==su)
{
printf("******DISCULPE\n Intenta usted serrar su cuenta\n");
printf("Para continuar precione < 1 >\n Para cancelar precione < 0 >\n");
scanf("%i",& n1);
if(n1==1)
{
res=0;
res=su-b;
}
else if(n1==0)
{
printf("Usted actualmente tiene:    %i\n",su);
res=0;
res=su;
}
}
su=res;
break;
case 3:
printf("\t  SALIR \n");
break;
}
getch();
clrscr();
}
}