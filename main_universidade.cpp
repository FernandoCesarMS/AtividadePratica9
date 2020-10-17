#include "Universidade.cpp"
#include <iomanip>
int main()
{
    Universidade UFMG;
    ProfHorista p1("Fernando", 200.0, 10.0);
    ProfHorista p2("Joao Paulo", 15.0, 10.0);
    ProfIntegral p3("Ortiz", 100.0);
    UFMG.addProfessor(p1);
    UFMG.addProfessor(p2);
    UFMG.addProfessor(p3);
    UFMG.listaProfessores();
    cout << fixed << setprecision(2);
    cout << "Total pago: R$ " << UFMG.totalPago();
    return 0;
}