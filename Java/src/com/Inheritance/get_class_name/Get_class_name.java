package com.Inheritance.get_class_name;

class Get_class_name extends Superclass{
    public static void main(String[] args){
        Get_class_name obj=new Get_class_name();
        System.out.println(obj.getClass());  //shows object's class
        System.out.println(obj.getClass() .getName());  //shows object's class
        System.out.println(obj.getClass().getSuperclass());  //shows object's superclass
        System.out.println(obj.getClass().getSuperclass().getName());  //shows name of object's superclass
        
    }

}