class Control{
    int res;
    public:
    Control(){
        res=0;
    }
    ~Control(){
        cout<<"\nborrado objeto controlador";
    }
    int controlador(int opc,int num,int num2){
        
        switch(opc){
            case 1:
                res=num+num2;
                break;
            case 2:
                res=num-num2;
                break;
            case 3:
                res=num*num2;
                break;
            case 4:
                if(num2!=0){
                    res=num/num2;
                }else{
                    cout<<"\ndivizion entre zero";
                    exit(0);
                }
            case 5:
                exit(0);
                break;
            default:
                break;
        }
        return res;
    }
};
