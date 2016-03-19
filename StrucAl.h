

// Estructuras
struct Alien_t
{
    char nombre[30];
    int id;
    char especie;

    // se pone "struct" porque todavia no esta declarada
    struct Planetas_t *planetas;
    struct Idiomas_t *idiomas;
    struct Alien_t *siguiente;
}Alien_t;

struct Planetas_t
{
    char nombre[30];
    int starWars_code;
    char tieneAgua;
    char tieneOxigeno;

    // se pone "struct" porque todavia no esta declarada
    struct Planetas_t *siguiente;
}Planetas_t;

struct Idiomas_t
{
    char nombre[30];
    char tips;
    int simbolos;

    // se pone "struct" porque todavia no esta declarada
    struct Idiomas_t *siguiente;
    struct Planetas_t *planetas;
}Idiomas_t;
