#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num_vertices;
    int num_arestas;
    int **matriz_adjacencia;
} Grafo;

Grafo* inicializar_grafo(int num_vertices) {
    Grafo* grafo = (Grafo*) malloc(sizeof(Grafo));
    grafo->num_vertices = num_vertices;
    grafo->num_arestas = 0;

    grafo->matriz_adjacencia = (int**) malloc(num_vertices * sizeof(int*));
    for (int i = 0; i < num_vertices; i++) {
        grafo->matriz_adjacencia[i] = (int*) calloc(num_vertices, sizeof(int));
    }

    return grafo;
}

void adicionar_aresta(Grafo* grafo, int vertice1, int vertice2) {
    if (vertice1 >= 0 && vertice1 < grafo->num_vertices && vertice2 >= 0 && vertice2 < grafo->num_vertices) {
        grafo->matriz_adjacencia[vertice1][vertice2] = 1;
        grafo->matriz_adjacencia[vertice2][vertice1] = 1;
        grafo->num_arestas++;
    }
}

void remover_aresta(Grafo* grafo, int vertice1, int vertice2) {
    if (vertice1 >= 0 && vertice1 < grafo->num_vertices && vertice2 >= 0 && vertice2 < grafo->num_vertices) {
        grafo->matriz_adjacencia[vertice1][vertice2] = 0;
        grafo->matriz_adjacencia[vertice2][vertice1] = 0;
        grafo->num_arestas--;
    }
}

void imprimir_grafo(Grafo* grafo) {
    printf("Número de vértices: %d\n", grafo->num_vertices);
    printf("Número de arestas: %d\n", grafo->num_arestas);
    printf("Matriz de adjacência:\n");
    for (int i = 0; i < grafo->num_vertices; i++) {
        for (int j = 0; j < grafo->num_vertices; j++) {
            printf("%d ", grafo->matriz_adjacencia[i][j]);
        }
        printf("\n");
    }
}

int main() {
    Grafo* grafo = inicializar_grafo(5);

    adicionar_aresta(grafo, 0, 1);
    adicionar_aresta(grafo, 0, 2);
    adicionar_aresta(grafo, 1, 3);
    adicionar_aresta(grafo, 2, 3);
    adicionar_aresta(grafo, 2, 4);

    imprimir_grafo(grafo);

    remover_aresta(grafo, 1, 3);
    imprimir_grafo(grafo);

    for (int i = 0; i < grafo->num_vertices; i++) {
        free(grafo->matriz_adjacencia[i]);
    }
    free(grafo->matriz_adjacencia);
    free(grafo);

    return 0;
}
