/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ex01;

/**
 *
 * @author doremi
 */
public class ClienteCTR {
    ClienteDAO clienteDAO = new ClienteDAO();
    
    public String mostraNomeRg(ClienteDTO clienteDTO){
        return clienteDAO.mostraNomeRg(clienteDTO);
    }
    
    public String mostraNomeIdade(ClienteDTO clienteDTO){
        return clienteDAO.mostraNomeIdade(clienteDTO);
    }
}
