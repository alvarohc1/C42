#include <unistd.h>

void rush(int X, int Y){

    char car1 = 'o';
    char car2 = '-';
    char car3 = '|';
    char espai = ' ';

    for (int i = 1 ; i <= X ; i++ ){
        
        if (i == 1 || i == X) { 

        write(1 , &car1 , 1);

        } else {

            write(1, &car3, 1);
        }
        
        for (int j = 2; j <= Y; j++){

            if (j == Y){
                
                if (i > 1 && i < Y){
                    
                    write(1, &car3, 1);
                    
                } else {

                write(1, &car1, 1);

                }

            } else {

            
            if ((j >= 2 && j < Y) && (i > 1 && i < X ) ) {

                write(1, &espai, 1);

            } else {

                write(1, &car2 , 1);

                }
            }

        }
        
        write(1 , "\n", 1); //SALTO DE LINEA 
        
    }

}




int main(){
    rush(150, 20);
    return 0;

}
#include <unistd.h>
