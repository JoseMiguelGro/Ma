#include <iostream>
using namespace std;
struct Empleado
{
    string nombre;
    float salario;
    string departamento;
};
Empleado empleadoConSalarioMasAlto(Empleado empleados[], int totalEmpleados) {
    Empleado empleadoMasAlto = empleados[0];

    for (int i = 1; i < totalEmpleados; i++) {
        if (empleados[i].salario > empleadoMasAlto.salario) {
            empleadoMasAlto = empleados[i];
        }
    }
    return empleadoMasAlto;
}
int main(){
    Empleado Empleados[100];
    int x,TotalEmpleados=0;
    do
    {
        cout<<"INDICE:"<<endl
        <<"1-Agregar un empleado:"<<endl
        <<"2-Consultar el salario mas alto:"<<endl
        <<"3-Actualizar el salario:"<<endl
        <<"4-Encontrar Empleado:"<<endl
        <<"5-Salir:"<<endl;
        cout<<"Ingrese el Numero: ";
        cin>>x;
        switch (x)
        {
        case 1:
            {
                if (TotalEmpleados<100)
                {
                   cout << "Ingrese el nombre del empleado: ";
                    cin.ignore();
                    getline(cin,Empleados[TotalEmpleados].nombre);
                    cout<<"Ingrese el salario del empleado: ";
                    cin>>Empleados[TotalEmpleados].salario;
                    cout<<"Ingrese el departamento del empleado: ";
                    cin>>Empleados[TotalEmpleados].departamento;
                    TotalEmpleados++;
                    cout<<endl;
                }
            }
            break;
        case 2:
            {
                if (TotalEmpleados>0)
                {
                    Empleado empleadoMasAlto= empleadoConSalarioMasAlto(Empleados,TotalEmpleados);
                    cout<<"Empleado con el salario más alto:"<<endl;
                    cout<<"Nombre: "<< empleadoMasAlto.nombre<<endl;
                    cout<<"Salario: "<<empleadoMasAlto.salario<<endl;
                    cout<<"Departamento: "<<empleadoMasAlto.departamento<<endl;
                    cout<<endl;
                }else
                {
                    cout<<"No tienes Registros"<<endl<<endl;
                }
            }
            break;
        case 3:
            {
                if (TotalEmpleados>0)
                {
                    int cambio;
                    cout<<"A que empleado le quiere cambiar el Salario (1-"<<TotalEmpleados<<"): ";
                    cin>>cambio;
                    if (cambio>0 and cambio<=TotalEmpleados)
                    {
                        cout<<"Ingrese el nuevo salario para el empleado " << cambio << ": ";
                        cin>>Empleados[cambio-1].salario;
                        cout<<"Salario actualizado exitosamente." << endl<<endl;
                    }
                }else
                {
                    cout<<"No tienes Registros"<<endl<<endl;
                }
            }
            break;
        case 4:
            {
                if (TotalEmpleados>0)
                {
                    int cambio;
                    cout<<"A que Empleado quieres conocer (1-"<<TotalEmpleados<<"): ";
                    cin>>cambio;
                    if (cambio>0 and cambio<=TotalEmpleados)
                    {
                        cout<<"Nombre del Empleado: "<<Empleados[cambio-1].nombre<<endl;
                        cout<<"Salario del Empleado: "<<Empleados[cambio-1].salario<<endl;
                        cout<<"Departamento del Empleado: "<<Empleados[cambio-1].departamento<<endl<<endl;
                    }
                }else
                {
                    cout<<"No tienes Registros"<<endl<<endl;
                }
            }
            break;
        case 5:
            cout<<"Hasta la PROXIMA";
            break;
        default:
            cout << "Opción inválida. Por favor, seleccione una opción válida." << endl<<endl;
        }
    }
    while (x!=5);    
    return 0;
}