/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ex01;
import javax.swing.JOptionPane;
/**
 *
 * @author doremi
 */
public class ClienteVIEW {
    public static void main(String args[]){
    try{
        ClienteDTO clienteDTO = new ClienteDTO();
        ClienteCTR clienteCTR = new ClienteCTR();
        
        clienteDTO.setNome(JOptionPane.showInputDialog("Informe o seu nome"));
        clienteDTO.setRg(JOptionPane.showInputDialog("Informe o RG"));
        clienteDTO.setIdade(Integer.parseInt(JOptionPane.showInputDialog("Informe a idade")));
        
        JOptionPane.showMessageDialog(null, clienteCTR.mostraNomeRg(clienteDTO));
        JOptionPane.showMessageDialog(null, clienteCTR.mostraNomeIdade(clienteDTO));
    }
    catch(Exception e){
        JOptionPane.showMessageDialog(null, "Erro no sistema: " + e.getMessage());
    }
    }
}
