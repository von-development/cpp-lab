// LISTA DE ALUNOS 

#include <iostream>
#include <iomanip>


class Aluno{
    public:
    std::string name;
    int nmec;
    double height;
    std::string naturality;

    Aluno(std::string name,
        int nmec,
        double height,
        std::string naturality){
            this-> name = name;
            this-> nmec = nmec;
            this-> height = height;
            this-> naturality = naturality;
        }

    // void displayAluno() const {
    //     std::cout << std::setw(10) << std::setfill(' ')<< name << "|"
    //               << std::setw(10) << std::setfill(' ')<< nmec << "|"
    //               << std::setw(10) << std::setfill(' ')<< height << "|"
    //               << std::setw(10) << std::setfill(' ')<< naturality << std::endl;
    // }

    // void displayAluno() const {
    //     std::cout << name  << std::setw(10) << std::setfill(' ') << "|" 
    //               << std::setw(10) << std::setfill(' ')
    //               << std::setw(10) << std::setfill(' ')<< height << "|"
    //               << std::setw(10) << std::setfill(' ')<< naturality << std::endl;


    // }



    void displayAluno() const {
        std::cout << std::left << "| " 
                  << std::setw(10) << name 
                  << "| " << std::setw(8) << nmec 
                  << "| " << std::setw(6) << height 
                  << "| " << std::setw(10) << naturality 
                  << "|" << std::endl;
    }
 };
int main(){

    Aluno aluno1("Victor", 123440, 1.73, "Brazil");
    Aluno aluno2("Joao", 123440, 1.73, "Portugal");

    aluno1.displayAluno();
    aluno2.displayAluno();

    


    // std::cout << "| Nome " << aluno1.name << "| Nmec:  " << aluno1.nmec 
    // << "| Naturialidade:  " << aluno1.naturality << " | Altura:  " << aluno1.height << std::endl;
    
    // std::cout << "| Nome " << aluno2.name << "| Nmec:  " << aluno2.nmec 
    // << "| Naturialidade:  " << aluno2.naturality << " | Altura:  " << aluno2.height << std::endl;


    

    return 0;
}