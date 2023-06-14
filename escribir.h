class Escribir{
    
    public:
    Escribir(){
        
    }
    ~Escribir(){
        cout<<"\nborrado objeto escribir";
    }
    void escribir(int res,int op){
        
        if(op >0 && op<5)
        {
            cout<<"\nEl Resultado es:"<<res;
        
        }else{
            if(op!=5){
                cout<<"\nIngrese un valor valido";
            }
        }
    }
    
};
