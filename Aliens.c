#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <StrucAl.h>
main()
{
    // Inicializando y dando espacios en memoria
    struct Alien_t *ListaAliens;
    ListaAliens = malloc(sizeof(struct Alien_t));
    ListaAliens->planetas = malloc(sizeof(struct Planetas_t));
    ListaAliens->idiomas = malloc(sizeof(struct Idiomas_t));



    // Creando primer Alien
    strcpy(ListaAliens->nombre, "Goku");
    ListaAliens->id = 6969;
    ListaAliens->especie = 127;

    // Creando primer Planeta
    strcpy(ListaAliens->planetas->nombre, "Namecusei");
    ListaAliens->planetas->starWars_code = 6582463;
    ListaAliens->planetas->tieneAgua = 1;
    ListaAliens->planetas->tieneOxigeno = 1;

    // Creando primer Idioma
    strcpy(ListaAliens->idiomas->nombre, "Namecu");
    ListaAliens->idiomas->tips = 91;
    ListaAliens->idiomas->simbolos = 54;

 /*===========================================================*/
    /*                 IMPRESIONES EN CONSOLA                    */
    /*===========================================================*/
    // Datos de Alien
    printf("=====================================\n");
    printf("DATOS DE PRIMER ALIEN.\n");
    printf("=====================================\n");
    printf("Nombre: %s\n",ListaAliens->nombre);
    printf("ID: %d\n", ListaAliens->id);
    printf("Especie: %d\n", ListaAliens->especie);

    // Datos de planetas
    printf("Planetas:\n");
    printf("     Nombre: %s\n", ListaAliens->planetas->nombre);
    printf("     StarWars Code: %d\n", ListaAliens->planetas->starWars_code);
    printf("     Tiene agua: %d\n", ListaAliens->planetas->tieneAgua);
    printf("     Tiene oxigeno: %d\n", ListaAliens->planetas->tieneOxigeno);

    // Datos de Idiomas
    printf("Idiomas: \n");
    printf("     Nombre: %s\n", ListaAliens->idiomas->nombre);
    printf("     Tips: %d\n", ListaAliens->idiomas->tips);
    printf("     Simbolos: %d\n", ListaAliens->idiomas->simbolos);


    return 0;
