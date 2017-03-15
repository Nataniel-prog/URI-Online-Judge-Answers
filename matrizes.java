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
/*public class Functions {

   
    public static void main(String[] args) {
        int n = 10, i;
        int v[] = {1,2,3,4,5,6,7,8,9,0};
        int[] k = new int[n];
        
        for(i=0; i < v.length; i++){
            k[n-1] = v[i];
            n--
        }
        System.out.print("O vetor ao contrário fica: ");
        for(i=0; i < v.length; i++){
            v[i] = k[i];
            System.out.print(k[i] + " ");
        }
    }
               
}*/
/*Imprima a posição (2,3)*/
public class Functions {

   
    public static void main(String[] args) {
        int m [][] = {{12, 3, 45, 22}, {13,2,312,33}, {1,3,11,667}, {2,9,7,5}};
        int i,j, maior=0, xpto=3;
        int xyz = 0;
        for(i=0; i < 4; i++){
            for(j=0; j < 4; j++){
                System.out.print(m[i][j]);   
                System.out.print(" ");            

            }
            System.out.print("\n"); 
        }
        
        System.out.print("O vetor na posição (2,3) é: " + m[2][3]);
        System.out.print("\n"); 
        
        for(i=0; i < 4; i++){
            for(j=0; j < 4; j++){
                if(m[i][j] > maior){
                    maior = m[i][j];
                }

            } 
        }
        
        System.out.print("O maior é: "+ maior); 
        System.out.print("\n");
        System.out.print("A diagonal secundária é: ");
        
        for(i=0; i<4; i++){
            System.out.print(m[i][xpto] + " ");
            xpto--;
        }
        System.out.print("\nA diagonal primária é: ");
        for(i=0; i<4; i++){
            System.out.print(m[i][xyz] + " ");
            xyz++;
        }
    }
}

     
