#include <iostream>
#include <vector>
#include <string>

//ARGUMENT CONTROLEREN OF HET INT ETC IS
//DOORSTUREN NAAR DE JUISTE FUNCTIE
//STATIC CAST? PER CATEGORIE
// https://cdn.intra.42.fr/pdf/pdf/68807/en.subject.pdf

int main(int argc, char const *argv[])
{
     
     if (argc != 2)
     {
          std::cout << "Wrong amount of Arguments" << std::endl;
          return EXIT_FAILURE;
     }

     if (isalpha(argv[1][0]))
     {
          printf("CHAR IS CHAR \n");
     }
     else if (isdigit(argv[1][0]) || (argv[1][0] == '-' && isdigit(argv[1][1])))
     {
           printf("Char is NUM\n");
     }
     else
          std::cout << "Argument not valid" << std::endl;








     std::cout << argv[1] << std::endl;


     //float f = 3.4f;
     //int n = static_cast<int>(f);

     //std::cout << f << std::endl;
     //std::cout << n << std::endl;

     //int test = 123522;
     //float result = static_cast<float>(test);

     //std::cout << result << std::endl;
   




     
     
     return EXIT_SUCCESS;
}