#include "cProyecto.h"

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

cProyecto::cProyecto(cJefes* Lider,string Nom, int ID, eEstado est)
{
	this->lider = Lider;
	this-> Nombre = Nom;
	this-> ID_Proyecto = ID;
	this-> estado = est;
	this-> Etapa = 0;

	ListaEntregasRealizadas = new cEntregas * [maxproyectos];
	for (int i = 0; i < maxproyectos; i++)
	{
		ListaProyectos[i] = NULL;
	}

}

cProyecto::~cProyecto() 
{


}

void cProyecto::ReasignarProyecto(cJefes* NuevoLider)
{
	this->lider = NuevoLider;

}

void cProyecto::RecibirEntrega()
{


}
