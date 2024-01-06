//  Created by Channel NIANGA
#pragma once
#include "Cellule.h"  

#include <iostream>
#include <stdlib.h>
#include <time.h>

              
class JeuDeLaVie {

private:                  
	int hauteur;        
	int largeur;  
	Cellule * TableauCellules;      

public:                             
	JeuDeLaVie(int hauteur, int largeur);
	int get_hauteur();              
	int get_largeur();                   
	void set_hauteur(int x);       
	void set_largeur(int y);           
	Cellule * get_cell(int posx, int posy);   
	void Compute_Next_State();             
	void evolve();                     
	void affiche();             
	void initialise();                 
	void initialise_Manuel(int nb_cellule);    
};
