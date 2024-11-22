class generics{
    public static void main(String args[]){
        // Create a Gen reference for Integers.
        Gen<Integer> iOb;

        iOb = new Gen<Integer>(88);

        iOb.showType();

        int v = iOb.getob();

        System.out.println("value: " + v);
        System.out.println();

        Gen<String> strOb = new Gen<String>("Generics Test");
        strOb.showType();

        String str = strOb.getob();

        System.out.println("value: " + str);

       
    }
}