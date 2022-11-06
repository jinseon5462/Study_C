package p20221103_inheritance;

public class Animal {
    int n = 10;

    void eat(){

    }

    void sleep(){

    }

    void cry(){
        System.out.println("...");
    }
}

class Human extends Animal{
    int n = 20;
    @Override
    void cry(){
        System.out.println("엉엉");
    }
}

class Dog extends Animal{
    int n = 30;
    @Override
    void cry(){
        System.out.println("멍멍");
    }
}