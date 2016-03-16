
typedef struct cat_struct {
	int number_of_eyes;
	int length_of_tail;
	int fat_quotient;
} cat;

//typedef struct cat_struct cat;

void get_yo_cat(cat* my_cat, int eyes, int tail, int fat){
	
	my_cat->number_of_eyes = eyes;
	my_cat->length_of_tail = tail;
	my_cat->fat_quotient = fat;
}

