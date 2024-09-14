public class stack {
    int SIZE = 20;
    int stack[] = new int[SIZE];
    int tos;
    

    stack(){
        tos = -1;
        
    }

    void push(int item){
        if(tos == SIZE-1){
            System.out.println("Stack is full!!");
        }
        else{
            stack[++tos] = item;
        }
        }
    

    int pop() {
        if (tos < 0) {
            System.out.println("Stack is empty!!");
            return -1; 
        } else {
            return stack[tos--];
        }
    }
    
}

class testStack{

public static void main(String args[]){
    stack mystack1 = new stack();
    stack mystack2 = new stack();

    for(int i=0;i<10;i++){
        mystack1.push(i);
    }
    for(int i=10;i<20;i++){
        mystack2.push(i);
    }

    System.out.println("Stack in mystack1:");
    for(int i=0;i<10;i++){
        System.out.println(mystack1.pop());
    }

    System.out.println("Stack in mystack2:");
    for(int i=0;i<10;i++){
        System.out.println(mystack2.pop());
    }



}

}
