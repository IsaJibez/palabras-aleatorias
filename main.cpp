#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>



using namespace std;
int main(){

srand(time(0));
int random_x = rand()%20+0;
int random_y = rand()%10+0;

	string palabra[20][10]={
	{"humano", "persona", "mujer", "hombre", "adolescente", "cabeza", "oreja", "cerebro", "ventaja", "estomago"}, //1
	{"familia", "conocido", "matrimonio", "abuelo", "padre", "criatura", "vida", "especie", "nacimiento", "muerte"}, //2
	{"tortuga", "gato", "perro", "animal", "oceano", "laguna", "playa", "bosque", "campo", "naturaleza"}, //3
	{"vaca", "cerdo", "oveja", "mono", "raton", "conejo", "dragon", "planta", "alimento", "comida"}, //4
	{"Argentina", "Mexico", "Venezuela", "arroz", "avena", "nuez", "flor", "trigo", "vegetal", "bebida"}, //5
	{"USA", "Colombia", "Brazil", "Espa�a", "Portugal", "Paraguay", "Uruguay", "Chile", "Rusia", "Francia"}, //6
	{"Venus", "Sol", "Luna", "Asia", "Antartica", "Africa", "Europa", "America", "Oceania", "China"}, //7
	{"Saturno", "Jupiter", "Mercurio", "Tierra", "Marte", "Neptuno", "Urano", "Pluton", "Florida", "Azul"}, //8
	{"Lima", "Verde", "Sangre", "Rojo", "Magenta", "Amarillo", "Cyan", "Turquesa", "Naranja", "Ambar"}, //9
	{"Rosa", "Blanco", "Negro", "Informatica", "Arquitectura", "Ciencia", "Ingenieria", "Medicina", "Derecho", "Mecatronica"}, //10
	{"Ropa", "Prenda", "Manga", "Gafas", "Pantalon", "Avion", "Metro", "Ferrocarril", "Noticiero", "Dentista"}, //11
	{"Camisa", "Lentes", "aereopuerto", "carretera", "Comedia", "Drama", "Tragedia", "Romance", "Exploracion", "Aventura"}, //12
	{"celeste", "marron", "gris", "autor", "punto", "simbolo", "Alfabeto", "papel", "voz", "Documento"}, //13
	{"colegio", "universidad", "navidad", "halloween", "marinero", "espectaculo", "arte", "cine", "dibujo", "musica"}, //14
	{"paz", "crisis", "progreso", "guerra", "importante", "agarrar", "llegar", "arrojar", "amar", "crecer"}, //15
	{"aburrirse", "conflicto", "sorprenderse", "asustarse", "llorar", "reir", "alegrarse", "admirar", "morder", "mejorar"},//16
	{"demasiado", "poco", "dormir", "descansar", "poder", "trabajar", "asesinar", "afirmar", "negar", "escribir"}, //17
	{"mucho", "bueno", "malo", "absoluto", "Electrodom�stico", "Arteriosclerosis", "Paralelepipedo", "Caleidoscopio", "Konoha", "Kamehameha"}, //18
	{"lepra", "vacuna", "desarrollo", "petroleo", "dinero", "programar", "reciente", "heroe", "barato", "karaoke"}, //19
	{"coronavirus", "jajajajaja ", "nani", "Electroencefalografista", "wwwwwwwwwww", "Esternocleidomastoideo", "Electroencefalografia", "Electroencefalograma", "Otorrinolaringologo", "Electrocardiograma"}, //20
	};

	cout<<palabra[random_x][random_y]<<endl;
	return 0;
}
