class Menu{
    int op;
    public:
    Menu(){
        op=0;
    }
    ~Menu(){
        cout<<"\nborrado objeto menu";
    }
    int menu(){
        cout<<"1.-Sumar\n";
        cout<<"2.-Restar\n";
        cout<<"3.-Multiplicar\n";
        cout<<"4.-Division\n";
        cout<<"5.-Salir\n";
        cin>>op;
        cout<<"Seleccione la opcion:"<<op;
        return op;
    }
};
