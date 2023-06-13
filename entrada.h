class Entrada{
    int num;
    public:
    Entrada(){
         num=0;   
    }
    ~Entrada(){
        cout<<"\nborrado objeto entrada";
    }
    int entrada(){
        cin>>num;
        cout<<"\nel numero es:"<<num;
        return num;
    }
};
