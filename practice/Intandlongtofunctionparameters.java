class Intandlongtofunctionparameters{

    static void fn(int i){
        System.out.println("inside int function");
    }

    static void fn(long i){
        System.out.println("inside long function");
    }

    public static void main(String[] args) {
        System.out.println("inside main function");
        fn(21474836475l);
    }
}