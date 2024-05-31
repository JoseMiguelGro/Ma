# Registros de Empleados
Este Documeto tratara de Crear una estructura `Empleado` con campos para nombre, salario y departamento. Utiliza un arreglo de esta estructura para almacenar información de varios empleados y realiza operaciones como encontrar el empleado con el salario más alto, actualizar salarios, etc.
#### Como crear una funcion de tipo *Struct* que se llame `Empleado`
```c++
struct Empleado
{
    string nombre;
    float salario;
    string departamento;
};
```
#### Crear una funcion para conocer el `Empleado` con el Mayor Salario
```c++
Empleado empleadoConSalarioMasAlto(Empleado empleados[], int totalEmpleados) {
    Empleado empleadoMasAlto = empleados[0];

    for (int i = 1; i < totalEmpleados; i++) {
        if (empleados[i].salario > empleadoMasAlto.salario) {
            empleadoMasAlto = empleados[i];
        }
    }
    return empleadoMasAlto;
}
```
#### Interpretacion de la *Struct* llamado `Empleado`
|Nombre|Salario|Departamento|
|------|-------|------------|
|Jose  |200.15 |Gerencia    |
### Dentro del main
#### Crear el arreglo de tipo *Struct* llamado `Empleados`
```c++
Empleado Empleados[100];
```
#### Aqui se crea el Indice para agregar, consultar el salario mas alto, actualizar el salario y encontrar el empleado
```c++
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
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        cout<<"HASTA LA PROXIMA"<<endl;
        break;    
    default:s
        cout << "Opción inválida. Por favor, seleccione una opción válida." << endl<<endl;
    }
}
while (x!=5);    
return 0;
```
#### Para Case 1:
Sirve para Agregar Empleados
```c++
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
```
#### Para Case 2:
Sirve para Consultar quien tiene el Salario mas Alto y mostrar sus Datos
```c++
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
```
#### Para Case 3:
Atualiza el Salario de un Empleado
```c++
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
```
#### Para Case 4:
Muestra los Datos de un Empleado
```c++
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
```

Alumno: Guerrero Romero Jose Miguel

Grupo 1-3