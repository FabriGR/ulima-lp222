#include <iostream>
using namespace std;

struct EmployeeRecord{
    int employeeId;
    string name;
    string hireDate;
    float salary;
    EmployeeRecord* next;    
};

void printEmployeeRecord(EmployeeRecord* emp){
    cout << "Codigo de Empleado: " << emp->employeeId << endl;
    cout << "Nombre de Empleado: " << emp->name << endl;
    cout << "Fecha de Contratacion: " << emp->hireDate << endl;
    cout << "Salario: " << emp->salary << endl;
}

void addEmployee(EmployeeRecord* &head, EmployeeRecord* newRecord){
    if(head != nullptr){
        //Obtenemos una referencia al ultimo elemento de la lista
        EmployeeRecord* ptr = head;
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        //Agrego al elemento nuevo como sucesor
        ptr->next = newRecord;
    }else{
        //Si la lista esta originalmente vacia
        head = newRecord;
    }
    newRecord->next = nullptr;
}

void showEmployee(EmployeeRecord* head, int searchId){
    EmployeeRecord* ptr = head;
    bool found = false;
    while(ptr != nullptr){
        if(ptr->employeeId == searchId){
            found = true;
            cout << "Empleado Encontrado ..." << endl;
            printEmployeeRecord(ptr);            
        }
        ptr = ptr->next;
    }
    if(!found){
        cout << "Empleado no encontrado: " << searchId << endl;
    }
}

void showAllEmployees(EmployeeRecord* head){
    EmployeeRecord* ptr = head;
    while(ptr != nullptr){
        cout << "****************" << endl;
        printEmployeeRecord(ptr);
        ptr = ptr->next;        
        cout << "****************" << endl;
    }    
}

int main(){
    EmployeeRecord* head = new EmployeeRecord();
    head->employeeId = 100;
    head->name = "Juan Perez";
    head->hireDate = "10/10/2021";
    head->salary = 5000;

    /*Podemos crear los empleados directamente, en el mismo orden en que
    se encuentran los atributos en la estructura*/
    EmployeeRecord record2 = {200, "Mariana Vargas", "05/01/1991", 15000, nullptr};
    EmployeeRecord record3 = {300, "Pedro Alvarez", "01/09/2003", 8000, nullptr};

    //Agregamos elementos a la lista
    addEmployee(head, &record2);
    addEmployee(head, &record3);

    //Mostramos todos los empleados
    showAllEmployees(head);

    //Buscamos el empleado con codigo 300
    showEmployee(head, 300);

}
/*
    int employeeId;
    string name;
    string hireDate;
    float salary;
    EmployeeRecord* next;   
*/