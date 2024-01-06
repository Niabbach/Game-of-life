//  Created by Channel NIANGA

#include "Cellule.h"

using namespace std;

Cellule::Cellule()
{
    state = false;
    next_state = false; 
}

// Method to get the current state of the cell
bool Cellule::get_state()
{
    return state;
}

// Method to get the next state of the cell
bool Cellule::get_next_state()
{
    return next_state;
}

// Method to set the current state of the cell
void Cellule::set_state(bool new_state)
{
    state = new_state;
}

// Method to set the next state of the cell
void Cellule::set_next_state(bool new_next_state)
{
    next_state = new_next_state;
}

// Method to display the cell's state
void Cellule::affiche()
{
    if (state) 
    { 
        cout << "x";
    }
    else 
    { 
        cout << " "; 
    }
}

// Method to update the current state of the cell to the next state
void Cellule::evolve()
{
    state = next_state;
}
