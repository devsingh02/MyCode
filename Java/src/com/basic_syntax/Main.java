package com.basic_syntax;

public class Main { //file
    public static void main(String[] args) { //Main (output)
        Student devansh = new Student();
        System.out.println("My name is "+devansh.name+" and I achieved "+devansh.marks+" marks");
        //learning how to use final keyword
        int b=10;
        final int a=b;
        System.out.println(a);
    }
}
class Student {  //Specific Use
    String name;
    int marks;

    Student() {
        this("Devansh",100);
    }

    Student(String name, int marks) {
        this.name = name;
        this.marks = marks;
    }
}





