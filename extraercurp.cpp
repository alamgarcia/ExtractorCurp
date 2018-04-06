#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main () {
  string line;
  ifstream archivo ("curps.txt");
  if (archivo.is_open())
  {
    while ( getline (archivo,line) )
    {
    	std::string tab = ";";
	 	std::string anio = line.substr (4,2);
	 	std::string mes = line.substr (6,2);
	 	std::string dia = line.substr (8,2);
	 	std::string gen = line.substr (10,1);
	 	std::string ent = line.substr (11,2);
 	 //GENERO
 	 
	  if (gen == "H")
 	 {
	  gen = "HOMBRE";
	  }
	  else
	  {
	  	gen = "MUJER";
	  }
	  
	//ENTIDADES FEDERATIVAS  
	   if (ent == "AS")
 	 {
	  ent = "AGUASCALIENTES";
	  }
	  else if (ent == "BS")
	  {
	  	ent = "BAJA CALIFORNIA SUR";
	  }
	  else if (ent == "CL")
	  {
	  	ent = "COAHUILA";
	  }	  
	  else if (ent == "CS")
	  {
	  	ent = "CHIAPAS";
	  }
	  else if (ent == "DF")
	  {
	  	ent = "DISTRITO FEDERAL";
	  }
	  else if (ent == "GT")
	  {
	  	ent = "GUANAJUATO";
	  }
	  else if (ent == "HG")
	  {
	  	ent = "HIDALGO";
	  }
	  else if (ent == "MC")
	  {
	  	ent = "MEXICO";
	  }
	  else if (ent == "MS")
	  {
	  	ent = "MORELOS";
	  }
	   else if (ent == "NL")
	  {
	  	ent = "NUEVO LEON";
	  }
	   else if (ent == "PL")
	  {
	  	ent = "PUEBLA";
	  }
	   else if (ent == "QR")
	  {
	  	ent = "QUINTANA ROO";
	  }
	   else if (ent == "SL")
	  {
	  	ent = "SINALOA";
	  }
	   else if (ent == "TC")
	  {
	  	ent = "TABASCO";
	  }
	   else if (ent == "TL")
	  {
	  	ent = "TLAXCALA";
	  }
	   else if (ent == "YN")
	  {
	  	ent = "YUCATAN";
	  }
	   else if (ent == "NE")
	  {
	  	ent = "NACIDO EN EL EXTRANJERO";
	  }
	   else if (ent == "BC")
	  {
	  	ent = "BAJA CALIFORNIA";
	  }
	   else if (ent == "CC")
	  {
	  	ent = "CAMPECHE";
	  }
	   else if (ent == "CM")
	  {
	  	ent = "COLIMA";
	  }
	   else if (ent == "CH")
	  {
	  	ent = "CHIHUAHUA";
	  }
	   else if (ent == "DG")
	  {
	  	ent = "DURANGO";
	  }
	   else if (ent == "GR")
	  {
	  	ent = "GUERRERO";
	  }
	   else if (ent == "JC")
	  {
	  	ent = "JALISCO";
	  }
	   else if (ent == "MN")
	  {
	  	ent = "MICHOACAN";
	  }
	   else if (ent == "NAYARIT")
	  {
	  	ent = "NT";
	  }
	   else if (ent == "OC")
	  {
	  	ent = "OAXACA";
	  }
	   else if (ent == "QT")
	  {
	  	ent = "QUERETARO";
	  }
	   else if (ent == "SP")
	  {
	  	ent = "SAN LUIS POTOSI";
	  }
	   else if (ent == "SR")
	  {
	  	ent = "SONORA";
	  }
	   else if (ent == "TS")
	  {
	  	ent = "TAMAULIPAS";
	  }
	   else if (ent == "VZ")
	  {
	  	ent = "VERACRUZ";
	  }
	   else if (ent == "ZS")
	  {
	  	ent = "ZACATECAS";
	  }
	  
	  else
	  {
	  	//Erorr
	  }
    	cout <<"19"<< anio << tab << mes << tab << dia << tab << gen << tab << ent << '\n';

    }

    archivo.close();
  }
  
  

  else cout << "No se puede abrir el archivo"; 

  return 0;
}
