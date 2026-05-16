#include <stdio.h>

int main() {

   // --- PERNAMBUCO --- //

char estado[8] = "PE";
char codigo1[8] = "A01";
char cidade1[8] = "Olinda";
float populacao1 = 349.376;
float area1 = 43.50;
float pi1 = 7000000000.00;
int turismo1 = 50;



printf("\n");



// --- CEARA --- //


char estadO2[7] = "CE";
char codigo2[7] = "A02";
char cidade2[7] = "fortaleza";
float populacao2 = 600.376;
float area2 = 154.50;
float pIB2 = 92450000000.00;
int turismo2 = 53;



printf("\n");



// ---  SAO PAULO --- //


char estado3[7] = "SP";
char codigo3[7] = "A03";
char cidade3[7] = "sao paulo";
float populacao3 = 1100.376;
float area3 = 1520.50;
float pIB3 = 120000000000.00;
int turismo3 = 75;













// --- PERNAMBUCO --- //

printf(" pernambuco\n");
printf(" - estado: %s\n - codigo: %s\n - cidade: %s\n - populacao: %.3f\n - area: %.2f\n - pib: %.2f\n - turismo: %d\n", estado, codigo1, cidade1, populacao1, area1, pi1, turismo1);

printf("\n");


// --- CEARA --- //

printf(" ceara\n");
printf(" - estado: %s\n - codigo: %s\n - cidade: %s\n - populacao: %.3f\n - area: %.2f\n - pib: %.2f\n - turismo: %d\n", estadO2, codigo2, cidade2, populacao2, area2, pIB2, turismo2);

printf("\n");



// --- SAO PAULO --- //

printf(" sao paulo\n");
printf(" - estado: %s\n - codigo: %s\n - cidade: %s\n - populacao: %.3f\n - area: %.2f\n - pib: %.2f\n - turismo: %d\n", estado3, codigo3, cidade3, populacao3, area3, pIB3, turismo3);

printf("\n");


return 0;














}