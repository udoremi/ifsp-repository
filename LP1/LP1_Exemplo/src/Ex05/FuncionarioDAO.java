/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Ex05;

/**
 *
 * @author mathe
 */
public class FuncionarioDAO {
    public String mostraDadosFunc(FuncionarioDTO funcionarioDTO){
        return "Os dados gravados são: \n" + "Nome: " + funcionarioDTO.getNome() + "\nLogradouro: " + funcionarioDTO.getLogradouro()
                + "\nBairro: " + funcionarioDTO.getBairro() + "\nCidade: " + funcionarioDTO.getCidade() 
                + "\nEstado: " + funcionarioDTO.getEstado() + "\nCEP: " + funcionarioDTO.getCep() + "\nCPF: "
                + funcionarioDTO.getCpf() + "\nRG: " + funcionarioDTO.getRg()+ "\nNúmero: " + funcionarioDTO.getNumero();
    }
}
