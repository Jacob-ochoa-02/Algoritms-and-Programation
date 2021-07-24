Algoritmo Notas_Practicas_Estudiantes
	Escribir "Numero de clases a las que asistió"
	Leer clases_a_las_que_asistió
	Escribir "Bonificación del estudiante"
	Leer Bonificacion
	Si asistió_a_26_clases Entonces
		La_bonificación_es =0.5
		SiNo
			La_bonificación_es =-0.5
		
		Fin Si
		Si Asistió_ente_19_y_26_clases Entonces
			La_bonificación_es =0.2
			
		FinSi
	Escribir "La Bonificación es: ",Bonificacion
FinAlgoritmo