Algoritmo Notas_Practicas_Estudiantes
	Escribir "Numero de clases a las que asisti�"
	Leer clases_a_las_que_asisti�
	Escribir "Bonificaci�n del estudiante"
	Leer Bonificacion
	Si asisti�_a_26_clases Entonces
		La_bonificaci�n_es =0.5
		SiNo
			La_bonificaci�n_es =-0.5
		
		Fin Si
		Si Asisti�_ente_19_y_26_clases Entonces
			La_bonificaci�n_es =0.2
			
		FinSi
	Escribir "La Bonificaci�n es: ",Bonificacion
FinAlgoritmo