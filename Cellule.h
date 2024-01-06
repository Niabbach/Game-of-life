//  Created by Channel NIANGA
#include <iostream>



class Cellule {


private:             
	bool state;                 
	bool next_state;                


public:                

	Cellule();         
	bool get_state();             
	bool get_next_state();         
	void set_state(bool new_state);         
	void set_next_state(bool new_next_state);           
	void affiche();                    
	void evolve();                        
};

