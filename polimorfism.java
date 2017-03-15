/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package functions;

/**
 *
 * @author daniel.mlfsantos
 */
public class Functions {

   
    public static void main(String[] args) {
        System.out.println("passed here\n");
        foo(2, 3);
        foo('2', 3, 4);
        foo(222, 3);
        
    }
     
    public static void foo(int a, int b ) {
        System.out.println("Hello world\n");
        int c = -3*a+5;
        System.out.print(c + "\n");
    }
    
    public static void foo(int a, int b , int c ) {
        System.out.print("Hello world 2\n");
    }
    
    public static void foo(int a,  int c ) {
        System.out.print("Hello world 3\n"+a);
    }
    
}
