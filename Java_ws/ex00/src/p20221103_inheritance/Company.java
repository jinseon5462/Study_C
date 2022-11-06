package p20221103_inheritance;
public class Company {
    private static Company instance = new Company();

    private Company(){

    }

    public static Company com(){
        return instance;
    }

}
