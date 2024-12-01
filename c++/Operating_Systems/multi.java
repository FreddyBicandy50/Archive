/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.java                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicandy <fbicandy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:36:45 by fbicandy          #+#    #+#             */
/*   Updated: 2024/11/28 20:45:22 by fbicandy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.logging.Level;
import java.util.logging.Logger;

class test{

    public static void main(String[] args) throws InterruptedException
    { 
        threads a=new threads(100);
        threads b=new threads(768);

        a.start();
        b.start();
        
        b.join();
        b.join();
        
        System.out.println("Sum="+a.getRes());
        System.out.println("Sum="+b.getRes());
    }
}