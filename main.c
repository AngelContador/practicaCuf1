 #include <stdio.h>
#define FILES 10
#define COLUMNES 10


void main(){
char lletra;
int cond, i, j, count=0, fco=0,rows, cols;
printf("*************************************************************\n");
printf("*************************************************************\n");
printf("********************THE BATTLESHIP GAME**********************\n");
printf("*************************************************************\n");
printf("*************************************************************\n");


printf("Welcome, player!! Escull un nivell:\n");
printf("1. Fàcil\n");
printf("2. Difícil\n");
printf("3. Molt complicat\n");
printf("4. No m'hi atreveixo :(\n");
do{
printf("Amb quina dificultat vols jugar?");
scanf("%d", &cond);
if(cond<1 || cond>4){
if(count<2){
printf("Torna a introduir el nivell, recorda que ha de ser un numero entre l'1 i el 4 inclosós.\n");
count=count+1;
}
else if (count==2){
printf("Has passat el límit d'errors!!!");
count=count+1;
}

}
}while((cond<0 || cond>5) && count<3);

switch(cond){
case 1:
printf("Estàs jugant el nivell fàcil\n");
printf(". A  B  C  D  E  F  G  H  I  J\n");
for(i=0;i<FILES;i++){
fco=i+1;
printf("%d",fco);
for(j=0;j<COLUMNES;j++){
printf("[ ]");
}
printf("\n");
}
do{
printf("Introdueix la fila: \n");
scanf("%d",&rows);
rows=rows-1;
}while(rows>9 || rows<0);

do{
printf("Introdueix la columna: \n");
scanf("%c", &lletra);
                if (lletra==65 || lletra==98) {
                    cols= 0;
                }
                else if (lletra==66 || lletra==98) {
                    cols= 1;
                }
                else if (lletra==67 || lletra==99) {
                    cols= 2;
                }
                else if (lletra==68 || lletra==100) {
                    cols= 3;
                }
                else if (lletra==69 || lletra==101) {
                    cols= 4;
                }
                else if (lletra==70 || lletra==102) {
                    cols= 5;
                }
                else if (lletra==71 || lletra==103) {
                    cols= 6;
                }
                else if (lletra==72 || lletra==104) {
                    cols= 7;
                }
                else if (lletra==73 || lletra==105) {
                    cols= 8;
                }
                else if (lletra==74 || lletra==106) {
                    cols= 9;
                }

}while(cols>9 || cols<0);

if((rows==8 && cols==2) || (rows==8 && cols==3) || (rows==8 && cols==4) || (rows==8 && cols==5) || (rows==8 && cols==6) || (rows==5 && cols==4) ||
(rows==5 && cols==5) || (rows==5 && cols==6) ||  (rows==5 && cols==7) || (rows==2 && cols==2) || (rows==3 && cols==2) || (rows==4 && cols==2) || (rows==2 && cols==4) ||
(rows==2 && cols==5) || (rows==1 && cols==8) || (rows==2 && cols==8) || (rows==3 && cols==8) ){

printf(". A  B  C  D  E  F  G  H  I  J\n");
for (i = 0; i < FILES; i++){
fco=i+1;
printf("%d", fco);
    for (j = 0; j < COLUMNES; j++){
    if (i==rows && j==cols){
    printf("[X]");
         }
         else{
         printf("[ ]");
         }
    }
    printf("\n");
}
printf("HAS TOCAT UN VAIXELL!!");
}
else {
printf(". A  B  C  D  E  F  G  H  I  J\n");
for (i = 0; i < FILES; i++){
fco=i+1;
printf("%d", fco);
for (j = 0; j < COLUMNES; j++){
printf("[ ]");
}
printf("\n");
}
printf("AIGUA, no has tocat cap vaixell");
}
break;

case 2:
printf("Estàs jugant el nivell difícil\n");
printf(". A  B  C  D  E  F  G  H  I  J\n");
for(i=0;i<FILES;i++){
fco=i+1;
printf("%d",fco);
for(j=0;j<COLUMNES;j++){
printf("[ ]");
}
printf("\n");
}
do{
printf("Introdueix la fila: \n");
scanf("%d",&rows);
rows=rows-1;
}while(rows>9 || rows<0);

do{
printf("Introdueix la columna: \n");
scanf("%c", &lletra);
               if (lletra==65 || lletra==98) {
                   cols= 0;
               }
               else if (lletra==66 || lletra==98) {
                   cols= 1;
               }
               else if (lletra==67 || lletra==99) {
                   cols= 2;
               }
               else if (lletra==68 || lletra==100) {
                   cols= 3;
               }
               else if (lletra==69 || lletra==101) {
                   cols= 4;
               }
               else if (lletra==70 || lletra==102) {
                   cols= 5;
               }
               else if (lletra==71 || lletra==103) {
                   cols= 6;
               }
               else if (lletra==72 || lletra==104) {
                   cols= 7;
               }
               else if (lletra==73 || lletra==105) {
                   cols= 8;
               }
               else if (lletra==74 || lletra==106) {
                   cols= 9;
               }

}while(cols>9 || cols<0);

if((rows==8 && cols==2) || (rows==8 && cols==3) || (rows==8 && cols==4) || (rows==8 && cols==5) || (rows==8 && cols==6) || (rows==5 && cols==4) ||
(rows==5 && cols==5) || (rows==5 && cols==6) ||  (rows==5 && cols==7) || (rows==2 && cols==2) || (rows==3 && cols==2) || (rows==4 && cols==2) || (rows==2 && cols==4) ||
(rows==2 && cols==5) || (rows==1 && cols==8) || (rows==2 && cols==8) || (rows==3 && cols==8) ){

printf(". A  B  C  D  E  F  G  H  I  J\n");
for (i = 0; i < FILES; i++){
fco=i+1;
printf("%d", fco);
    for (j = 0; j < COLUMNES; j++){
    if (i==rows && j==cols){
    printf("[X]");
         }
         else{
         printf("[ ]");
         }
    }
    printf("\n");
}
printf("HAS TOCAT UN VAIXELL!!");
}
else {
printf(". A  B  C  D  E  F  G  H  I  J\n");
for (i = 0; i < FILES; i++){
fco=i+1;
printf("%d", fco);
for (j = 0; j < COLUMNES; j++){
printf("[ ]");
}
printf("\n");
}
printf("AIGUA, no has tocat cap vaixell");
}
break;

case 3:
printf("Estàs jugant el nivell Molt Complicat\n");
printf(". A  B  C  D  E  F  G  H  I  J\n");
for(i=0;i<FILES;i++){
fco=i+1;
printf("%d",fco);
for(j=0;j<COLUMNES;j++){
printf("[ ]");
}
printf("\n");
}
do{
printf("Introdueix la fila: \n");
scanf("%d",&rows);
rows=rows-1;
}while(rows>9 || rows<0);

do{
printf("Introdueix la columna: \n");
scanf("%c", &lletra);
               if (lletra==65 || lletra==98) {
                   cols= 0;
               }
               else if (lletra==66 || lletra==98) {
                   cols= 1;
               }
               else if (lletra==67 || lletra==99) {
                   cols= 2;
               }
               else if (lletra==68 || lletra==100) {
                   cols= 3;
               }
               else if (lletra==69 || lletra==101) {
                   cols= 4;
               }
               else if (lletra==70 || lletra==102) {
                   cols= 5;
               }
               else if (lletra==71 || lletra==103) {
                   cols= 6;
               }
               else if (lletra==72 || lletra==104) {
                   cols= 7;
               }
               else if (lletra==73 || lletra==105) {
                   cols= 8;
               }
               else if (lletra==74 || lletra==106) {
                   cols= 9;
               }

}while(cols>9 || cols<0);

if((rows==8 && cols==2) || (rows==8 && cols==3) || (rows==8 && cols==4) || (rows==8 && cols==5) || (rows==8 && cols==6) || (rows==5 && cols==4) ||
(rows==5 && cols==5) || (rows==5 && cols==6) ||  (rows==5 && cols==7) || (rows==2 && cols==2) || (rows==3 && cols==2) || (rows==4 && cols==2) || (rows==2 && cols==4) ||
(rows==2 && cols==5) || (rows==1 && cols==8) || (rows==2 && cols==8) || (rows==3 && cols==8) ){

printf(". A  B  C  D  E  F  G  H  I  J\n");
for (i = 0; i < FILES; i++){
fco=i+1;
printf("%d", fco);
    for (j = 0; j < COLUMNES; j++){
    if (i==rows && j==cols){
    printf("[X]");
         }
         else{
         printf("[ ]");
         }
    }
    printf("\n");
}
printf("HAS TOCAT UN VAIXELL!!");
}
else {
printf(". A  B  C  D  E  F  G  H  I  J\n");
for (i = 0; i < FILES; i++){
fco=i+1;
printf("%d", fco);
for (j = 0; j < COLUMNES; j++){
printf("[ ]");
}
printf("\n");
}
printf("AIGUA, no has tocat cap vaixell");
}
break;

default:
printf("Has sortit del joc");
}

}
