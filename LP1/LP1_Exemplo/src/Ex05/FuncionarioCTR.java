/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Ex05;

/**
 *
 * @author mathe
 */
public class FuncionarioCTR {
    FuncionarioDAO funcionarioDAO = new FuncionarioDAO();
    
    public String mostraDadosFunc(FuncionarioDTO funcionarioDTO){
        return funcionarioDAO.mostraDadosFunc(funcionarioDTO);
    }
}
