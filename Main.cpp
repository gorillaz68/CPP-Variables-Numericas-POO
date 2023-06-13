public class Limite{
    int result,op;
    public Limite(){
        result = 0;
        op=0;
    }
    public void escribir(int x,int y){
        this.result = x;
        this.op=y;
        if(op > 0 && op < 5){
            System.out.println("el resultado es:"+result);
        }
        else{
            if(op != 5){
                System.out.println("Ingrese un valor válido");
            }
        }
        
    }
}
