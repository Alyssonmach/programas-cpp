// Exercício 2.23: ex02_23.cpp
// Maior e menor de cinco números inteiros
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	
	int num1, num2, num3, num4, num5;
	int maior, menor;
	
	cout << "Enter five integers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	
	if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
	        maior = num1; }
	    else
	        if(num2 > num3 && num2 > num4 && num2 > num5) {
	            maior = num2; }
	    else
	        if(num3 > num4 && num3 > num5) {
	            maior = num3; }
	    else
	        if(num4 > num5) {
	            maior = num4; }
	    else {
	        maior = num5; }
	
	    if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
	        menor = num1; }
	    else
	        if(num2 < num3 && num2 < num4 && num2 < num5) {
	            menor = num2; }
	    else
	        if(num3 < num4 && num3 < num5) {
	            menor = num3; }
	    else
	        if(num4 < num5) {
	            menor = num4; }
	    else {
	        menor = num5; }
	        
    cout << "Max number is " << maior << endl;
    cout << "Min number is " << menor << endl;
	
	return 0;	
}