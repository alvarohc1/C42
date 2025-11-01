
void ft_putchar(char c);

void rush(int X, int Y){

    char car1 = 'o';
    char car2 = '-';
    char car3 = '|';
    char espai = ' ';

    for (int i = 1 ; i <= X ; i++ ){
        
        //NADA POR AQUI
         
        for (int j = 1; j <= Y; j++){

            if ((i == 1 && j == 1) || (i == 1 && j == Y) ||
            (i == X && j == 1) || (i == X && j == Y)) {

                ft_putchar(car1);

            } else if (i == 1 || i == X) {

                ft_putchar(car2);

            } else if (j == 1 || j == Y) {

                ft_putchar(car3);

            } else {

                ft_putchar(espai);

            }

        }
        
        ft_putchar('\n'); //SALTO DE LINEA PARA CREAR FILAS
        
    }

}

