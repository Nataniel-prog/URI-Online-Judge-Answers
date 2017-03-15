public class Functions {

   
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
               
}
