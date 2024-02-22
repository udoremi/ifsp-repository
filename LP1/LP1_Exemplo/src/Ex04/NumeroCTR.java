/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Ex04;

/**
 *
 * @author mathe
 */
public class NumeroCTR {
    NumeroDAO numeroDAO = new NumeroDAO();
    
    public String confereNum(NumeroDTO numeroDTO){
        return numeroDAO.confereNum(numeroDTO);
    }
}
