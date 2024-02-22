/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Ex04;

/**
 *
 * @author mathe
 */
public class NumeroDAO {
    public String confereNum(NumeroDTO numeroDTO){
        if(numeroDTO.getNum1() > numeroDTO.getNum4()){
            return "A ordem decrescente é: " + numeroDTO.getNum3() 
                    + numeroDTO.getNum2() + numeroDTO.getNum1() + numeroDTO.getNum4();
        } else{
            if(numeroDTO.getNum2() > numeroDTO.getNum4()){
                return "A ordem decrescente é: " + numeroDTO.getNum3() 
                        + numeroDTO.getNum2() + numeroDTO.getNum4() + numeroDTO.getNum1();
            } else{
                if(numeroDTO.getNum3() > numeroDTO.getNum4()){
                    return "A ordem decrescente é: " + numeroDTO.getNum3() 
                            + numeroDTO.getNum4() + numeroDTO.getNum2() + numeroDTO.getNum1();
                } else{
                    if(numeroDTO.getNum4() > numeroDTO.getNum3()){
                        return "A ordem decrescente é: " + numeroDTO.getNum4() 
                                + numeroDTO.getNum3() + numeroDTO.getNum2() + numeroDTO.getNum1();
                    } else{
                        return "Erro no cálculo";
                    }
                }
            }
        }
    }
}
