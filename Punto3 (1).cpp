#include<iostream>
#include<stdlib.h> 
using namespace std;

int calcular_factorial(int var)
{
    if(var<2)
        return 1;
    else
        return var * calcular_factorial(var-1);
}

int combinatoria(int var, int var2)
{
    if(var2==1)
        return var;
    else
    {
        if(var==var2)
            return 1;
        else
            return calcular_factorial(var) / (calcular_factorial(var2) * calcular_factorial(var - var2));
    }
}

int main(){
	cout<<"Triangulo de Pascal...\n\n"<<endl;
	int n_filas, suma_elementos=0;
	cout<<"Cuantas filas desea agregarle al triangulo de Pascal: "; cin>>n_filas;
    for(int i=0; i<=n_filas-1; i++)
    {
        for(int j=0; j<=i; j++)
            cout << combinatoria(i, j) << "  ";
        cout << endl;
    }
    
    for(int i=0; i<n_filas; i++)
    {
        for(int j=0; j<=i; j++)
            suma_elementos= suma_elementos + combinatoria(i, j);
        cout << endl;
    }
    cout<<"\n\nLa suma de todos los elementos del trangulo es: "<<suma_elementos<<"\n"<<endl;
    system("pause");
	return 0;
}
