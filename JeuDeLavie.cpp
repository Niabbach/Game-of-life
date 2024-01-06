// Created by Channel NIANGA

#include "JeuDeLaVie.h" 
#include <algorithm> 

using namespace std;


JeuDeLaVie::JeuDeLaVie(int x, int y)
{
    hauteur = x; 
    largeur = y; 

    TableauCellules = new Cellule[hauteur * largeur]; 
}

// Getter methods for height and width of the grid
int JeuDeLaVie::get_hauteur()
{
    return hauteur;
}

int JeuDeLaVie::get_largeur()
{
    return largeur;
}

// Setter methods for height and width of the grid
void JeuDeLaVie::set_hauteur(int x)
{
    hauteur = x;
}

void JeuDeLaVie::set_largeur(int y)
{
    largeur = y;
}

// Method to get a specific cell from the grid using its position
Cellule * JeuDeLaVie::get_cell(int posx, int posy)
{
    return (TableauCellules + largeur * posx + posy);
}

// Method to compute the next state of each cell based on the rules of the Game of Life
void JeuDeLaVie::Compute_Next_State()
{
    int nb_voisin = 0;
    bool alive = true;
    bool dead = false;

    for (int i = 0; i < hauteur; i++) {
        for (int j = 0; j < largeur; j++) {
            nb_voisin = 0;
            for (int k = max(i - 1, 0); k < min(i + 2, hauteur); k++) {
                for (int m = max(j - 1, 0); m < min(j + 2, largeur); m++) {
                    if (!(i == k && j == m)) {
                        nb_voisin += (TableauCellules + (largeur * k) + m)->get_state();
                    }
                }
            }

            if ((nb_voisin == 2 || nb_voisin == 3) && (TableauCellules + i * largeur + j)->get_state() == true) {
                (TableauCellules + i * largeur + j)->set_next_state(alive);
            }

            else if ((nb_voisin == 3) && (TableauCellules + i * largeur + j)->get_state() == false) {
                (TableauCellules + i * largeur + j)->set_next_state(alive);
            }

            else {
                (TableauCellules + i * largeur + j)->set_next_state(dead);
            }
        }
    }
}

// Method to evolve the grid to the next state based on the computed next states
void JeuDeLaVie::evolve()
{
    for (int i = 0; i < hauteur; i++) {
        for (int j = 0; j < largeur; j++) {
            (TableauCellules + largeur * i + j)->evolve();
        }
    }
}

// Method to display the grid
void JeuDeLaVie::affiche()
{
    for (int j = 0; j < largeur; j++) {
        cout << "-";
    }

    cout << "\n";

    for (int i = 0; i < hauteur; i++) {
        cout << "|";

        for (int j = 0; j < largeur; j++) {
            (TableauCellules + largeur * i + j)->affiche();
        }

        cout << "|";
        cout << endl;
    }

    for (int j = 0; j < largeur; j++) {
        cout << "-";
    }

    cout << "\n\n";
}

// Method to initialize the grid with random cell states
void JeuDeLaVie::initialise() {
    bool rn;
    srand(time(NULL));

    for (int i = 0; i < hauteur; i++) {
        for (int j = 0; j < largeur; j++) {
            rn = rand() % 2;
            (TableauCellules + largeur * i + j)->set_state(rn);
        }
    }
}

// Method to manually initialize cells based on user input of cell addresses
void JeuDeLaVie::initialise_Manuel(int nb_cellule) {
    int address;
    int k, m;
    bool alive = true;

    for (int i = 0; i < nb_cellule; i++) {
        cout << "entrer les addresses des cellules :  ";
        cin >> address;
        k = int(address / largeur);
        m = address % largeur;

        (TableauCellules + k * largeur + m)->set_state(alive);
    }
}
