// Created by Channel NIANGA

#include <iostream>
#include "JeuDeLaVie.h" 
#include "Cellule.h"
#include <Windows.h> 

using namespace std;

int main() {
    bool alive = true; // Variable indicating an alive cell
    int i = 0; // Counter for generations
    int haut = 0; // Height of the grid
    int larg = 0; // Width of the grid
    int choice = 0; // User's choice for initialization
    int nb_cellule = 0; // Number of cells to initialize manually

    // Display initial information about the program and prompt for grid dimensions
    cout << "GAME OF LIFE.Channel NIANGA" << "\n";
    cout << "Projet C++" << "\n";
    cout << "------------------\n\n";

    cout << "Entrer la hauteur  : ";
    cin >> haut;
    cout << "Entrer la largeur : ";
    cin >> larg;
    cout << endl;

    // Create an instance of JeuDeLaVie (Game of Life) with the specified dimensions
    JeuDeLaVie J(haut, larg);

    // Prompt the user to choose the method of grid initialization
    cout << "1 - demarrer avec une configuration aleatoire \n";
    cout << "2 - specifier une  configuration ";
    cin >> choice;

    // Initialize the grid randomly if user chooses option 1
    if (choice == 1) {
        J.initialise();
    }

    // Manually initialize the grid based on user input if option 2 is chosen
    if (choice == 2) {
        cout << "entrer le nombre de cellule a initialiser : ";
        cin >> nb_cellule;
        J.initialise_Manuel(nb_cellule);
    }

    // Clear the console screen and display the initial state of the grid
    system("cls");
    J.affiche();

    // Pause to let the user see the initial state before starting the simulation
    system("pause");
    cout << "appuyer sur une touche pour demarrer ..." << "\n\n";

    // Loop to simulate the generations and display the evolution of the grid
    while (i < 50000) { 
        cout << "\t nombre de generation : " << i << endl;
        Sleep(60); 
        J.Compute_Next_State();
        J.evolve(); 
        system("cls"); 
        J.affiche(); 
        i++; 
    }

    return 0;
}
