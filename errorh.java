public class errorh {
    
        public static void main(String args[]){

            int[] num = {4,3,2,4,2,5,7};
            int[] deno = {2,3,5,6};

            for(int i=0;i<num.length;i++){
                try{
                    System.out.println(num[i]/deno[i]);
                }
                catch(ArithmeticException e){
                    System.out.println("Divide by zero");
                    return;
                }
                catch(ArrayIndexOutOfBoundsException e){
                    System.out.println("Array index out of bound");
                    return;
                }
            }
            
        }
        

    }

