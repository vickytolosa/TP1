#include "cEntregas.h"

cEntregas::cEntregas(int num_etapa, int ID, bool aceptada)
{
	this->Num_Etapa = num_etapa;
	this->ID_Proyecto = ID;
	this->Aceptada = aceptada;
}

void cEntregas::Actualizar(cJefes* jefe)
{
	CantEntregas = CantEntregas + 1;
	if(Aceptada==1)
	{
		
	//indicar finalizac�on

	}
	else
	{
	//imprimir slicitud de re entrega�)
	}
}
