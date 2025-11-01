/*RUSH 02 A EN COLUMNA & FILA 1 || FINAL - B-->CONTORNOS - C COLUMNA 1 & FINAL DE FILA FINAL */

void ft_putchar(char c);

void rush(int X, int Y){

    char car1 = 'A';
    char car2 = 'C';
    char car3 = 'B';
    char espai = ' ';

    for (int i = 1 ; i <= X ; i++ ) { //FILAS    
          
        for (int j = 1; j <= Y; j++) { //COLUMNAS

            if ( (i == 1 && j == 1) || (i == 1 && j == Y) ) {

                ft_putchar(car1);

            } else if ( ( i == X && j == 1 ) || ( i == X && j == Y ) ) {

            //} else if ( (i == 1 && j == Y) || (i == X && j == 1) ) {

                ft_putchar(car2);

            } else if ( (i == 1 || i == X) || (j == 1 || j == Y) ) {

                ft_putchar(car3);

            } else {

                ft_putchar(espai);

            }

        }
        
        ft_putchar('\n'); //SALTO DE LINEA PARA CREAR FILAS
        
    }

}

