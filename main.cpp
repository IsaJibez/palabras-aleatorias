#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//randomnizador
int random(int n){
	srand(time(0));
    int numero = rand() % n + 0;

	return numero;
}

//Banco de palabras
string palabra(int x, int y){
		string banco_de_palabras[20][10]={
	{"humano", "persona", "mujer", "hombre", "adolescente", "cabeza", "oreja", "cerebro", "ventaja", "estomago"}, //1
	{"familia", "conocido", "matrimonio", "abuelo", "padre", "criatura", "vida", "especie", "nacimiento", "muerte"}, //2
	{"tortuga", "gato", "perro", "animal", "oceano", "laguna", "playa", "bosque", "campo", "naturaleza"}, //3
	{"vaca", "cerdo", "oveja", "mono", "raton", "conejo", "dragon", "planta", "alimento", "comida"}, //4
	{"Argentina", "Mexico", "Venezuela", "arroz", "avena", "nuez", "flor", "trigo", "vegetal", "bebida"}, //5
	{"USA", "Colombia", "Brazil", "Italia", "Portugal", "Paraguay", "Uruguay", "Chile", "Rusia", "Francia"}, //6
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
	{"mucho", "bueno", "malo", "absoluto", "Electrodomostico", "Arteriosclerosis", "Paralelepipedo", "Caleidoscopio", "Konoha", "Kamehameha"}, //18
	{"lepra", "vacuna", "desarrollo", "petroleo", "dinero", "programar", "reciente", "heroe", "barato", "karaoke"}, //19
	{"coronavirus", "jajajajaja ", "nani", "Electroencefalografista", "wwwwwwwwwww", "Esternocleidomastoideo", "Electroencefalografia", "Electroencefalograma", "Otorrinolaringologo", "Electrocardiograma"}, //20
	};
	return banco_de_palabras[x][y];
}

//Funcion principal
int main(){

	cout<<palabra(random(20),random(10));
	//let word? = palabra(random(20),random(10));
	return 0;
}
