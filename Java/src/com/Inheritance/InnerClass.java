package com.Inheritance;
public class InnerClass {
    static class Student {
        String name;
        double marks;
        Student() {
            name = null;
            marks = 0.0;
        }
        Student(String name, double marks) {
            this.name = name;
            this.marks = marks;
        }
    }
    public static void main(String[] args) {
        Student q = new Student();
        System.out.println(q.name);
    }
}


