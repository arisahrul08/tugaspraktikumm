//nama:Ari SAHRUL
//npm:20.14.1.0007
//nama program: tugas 3 bagian 1.pas

 #include <iostream>
 
  using namespace
  	
  	 nilai,quis,absen,uts,uas,tugas :endl;
  	 huruf_mutu : char;
  	
  	int main()
  	
  	{
  		clrscr;
  		quis :=40;
  		absen:=100;
  		uts:=60;
  		uas:=50;
  		tugas:=80;
  		
  		 cout<<("absen = ", absen:5:2, "UTS = ", uts:5:2);
  		 cout<<("Tugas = ", tugas:5:2, "UAS = ", uas:5:2);
  		 cout<<("Quis  = ", quis:5:2);
  		 
  		 nilai:((0,1*absen) + ( 0,2*tugas) + ( 0,3*quis) + ( 0,4*uts) + ( 0,5*uas) )/2;
  		 
  		 
  		 if (nilai>85) and (nilai<=100) then
  		 Huruf_Mutu:="A"
  		 else if (nilai>70) and (nilai<=85) then
  		 Huruf_Mutu:="B"
  		 else if  (nilai>55) and (nilai<=70) then
  		 Huruf_Mutu:="C"
  		 else if  (nilai>40) and (nilai<=55) then
  		 Huruf_Mutu:="D"
  		 else if  (nilai>0) and (nilai<=40) then
  		 Huruf_Mutu:="E"
  		 
  		 cout<<("Huruf Mutu : ", Huruf_Mutu);
  		  readln;
  		  
  		  
  		  else if  (nilai>55) and (nilai<=70) then
  		  Huruf_Mutu:="C"
  		  else if  (nilai>40) and (nilai<=55) then
  		  Huruf_Mutu:="D"
  		  else if  (nilai>0) and (nilai<=40) then
  		  Huruf_Mutu:="E";
  		  
  		  cout("Huruf MutuS", Huruf_Mutu);
  		  readln;
  		  
  		  
  		  
  		return 0;
	  
	}
