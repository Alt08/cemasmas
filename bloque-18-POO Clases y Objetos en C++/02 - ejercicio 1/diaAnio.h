// Aqui solo se definen las variables, funciones segun se requiera
// Declaracion de la variable
class DiaAnio{ 
    // Declaracion de los atributos
    private:
        int dia, mes;

    public:
        // Declaracion del constructor
        DiaAnio(int _dia, int _mes){
            dia = _dia;
            mes = _mes;
        }

        // Declaracion de los metodos
        // Se trabaja con punteros, porque seran datos dinamicos
        bool igual(DiaAnio& d); // Se pasa posicion, asi & d
        void visualizar();

};