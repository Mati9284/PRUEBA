#include <iostream> // Solicitar biblioteca
using namespace std;

int main() // Funcion principal
{
	int edad; // Variable de la edad
	int dia; // Variable del dia
	float precio; // Variable del precio
	float descuento1; // Variable del porcentaje
	float precio_con_descuento; // Variable del precio con descuento
	cout << "Este programa indica con el precio del producto el descuento dependiendo el dia y la edad" << endl; // Presentacion
	cout << endl; // Separacion
	cout << "Ingrese precio" << endl; // Pedirle al usuario que ingrese el precio
	cin >> precio; // Datos del precio guardado en variable
	cout << endl; // Separacion
	cout << "Ahora porfavor ingrese su edad" << endl; // Pedirle al usuario que ingrese la edad
	cin >> edad; // Datos de la edad guardado en variable
	cout << endl; // Separacion
	cout << "Ingrese el dia de la semana entre 1 que es lunes y 7 que es domingo" << endl; // Pedirle al usuario que ingrese el dia
	cin >> dia; // Datos del dia guardado en variable
	cout << endl; // Separacion
	if(edad < 12) // Si la edad es menor a 12
	{
		if(dia == 2 or dia == 4) // Y si el dia es martes(2) o jueves(4)
		{
			descuento1 = precio * 0.20; // Calculo del descuento
			precio_con_descuento = precio - descuento1; // Calculo del precio con descuento
			cout << "El precio del producto es de: " << precio << " pesos" << endl; // Precio del producto base expresado en pantalla
			cout << "El descuento que se aplica es de: " << descuento1 << " pesos" << endl; // Precio del descuento expresado en pantalla
			cout << "El precio final del producto es de: " << precio_con_descuento << " pesos" << endl; // Precio final del producto expresado en pantalla
		}
		else // Si el dia no es martes o jueves
		{
			descuento1 = precio * 0.15; // Calculo del descuento
			precio_con_descuento = precio - descuento1; // Calculo del precio con descuento
			cout << "El precio del producto es de: " << precio << " pesos" << endl; // Precio del producto base expresado en pantalla
			cout << "El descuento que se aplica es de: " << descuento1 << " pesos" << endl; // Precio del descuento expresado en pantalla
			cout << "El precio final del producto es de: " << precio_con_descuento << " pesos" << endl; // Precio final del producto expresado en pantalla
		}
	}
	else
	if(edad >= 60) // Si la edad es mayor o igual a 60
	{
		if(dia == 2 or dia == 4) // Y si el dia es martes o jueves
		{
			descuento1 = precio * 0.15; // Calculo del descuento
			precio_con_descuento = precio - descuento1; // Calculo del precio con descuento
			cout << "El precio del producto es de: " << precio << " pesos" << endl; // Precio del producto base expresado en pantalla
			cout << "El descuento que se aplica es de: " << descuento1 << " pesos" << endl; // Precio del descuento expresado en pantalla
			cout << "El precio final del producto es de: " << precio_con_descuento << " pesos" << endl; // Precio final del producto expresado en pantalla
		}
		else // Si el dia no es martes o jueves
		{
			descuento1 = precio * 0.10; // Calculo del descuento
			precio_con_descuento = precio - descuento1; // Calculo del precio con descuento
			cout << "El precio del producto es de: " << precio << " pesos" << endl; // Precio del producto base expresado en pantalla
			cout << "El descuento que se aplica es de: " << descuento1 << " pesos" << endl; // Precio del descuento expresado en pantalla
			cout << "El precio final del producto es de: " << precio_con_descuento << " pesos"<< endl; // Precio final del producto expresado en pantalla
		}
	}
	else
	if(edad >= 12 and edad < 60) // Si la edad es mayor o igual a 12 y la edad es menor a 60
	{
		if(dia == 2 or dia == 4) // Y el dia es martes o jueves
		{
			descuento1 = precio * 0.05; // Calculo del descuento
			precio_con_descuento = precio - descuento1; // Calculo del precio con descuento
			cout << "El precio del producto es de: " << precio << " pesos" << endl; // Precio del producto base expresado en pantalla
			cout << "El descuento que se aplica es de: " << descuento1 << " pesos" <<endl; // Precio del descuento expresado en pantalla
			cout << "El precio final del producto es de: " << precio_con_descuento << " pesos" << endl; // Precio final del producto expresado en pantalla
		}
		else // Si el dia no es ni martes o jueves
		{
			cout << "El precio del producto es de: " << precio << " pesos" << endl; // Precio del producto base expresado en pantalla
			cout << "No se aplica ningun descuento" << endl; // Precio del descuento expresado en pantalla
			cout << "El precio final del producto es de: " << precio << " pesos" << endl; // Precio final del producto expresado en pantalla
		}
	}
	return 0;
}
