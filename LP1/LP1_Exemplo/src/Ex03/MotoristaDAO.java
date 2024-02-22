/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ex03;

/**
 *
 * @author doremi
 */
public class MotoristaDAO {
    public String verificaIdade(MotoristaDTO motoristaDTO){
        if(motoristaDTO.getIdade() >= 18){
            return "O motorista pode ter CNH.";
        }
        else{
            return "O motorista NÃO pode ter CNH";
        }
    }
}
