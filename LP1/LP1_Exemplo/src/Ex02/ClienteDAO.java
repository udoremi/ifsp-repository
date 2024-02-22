/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ex02;

/**
 *
 * @author doremi
 */
public class ClienteDAO {
    public String mostraNomeRg(ClienteDTO clienteDTO){
        return "O nome é: " + clienteDTO.getNome() + "\nO RG é: " + clienteDTO.getRg();
    }
    
    public String mostraNomeIdade(ClienteDTO clienteDTO){
        return "O nome informado foi: " + clienteDTO.getNome() 
                + "\nA idade informada foi: " + clienteDTO.getIdade();
    }
}
