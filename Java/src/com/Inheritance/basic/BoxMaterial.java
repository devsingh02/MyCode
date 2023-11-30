package com.Inheritance.basic;

class BoxMaterial extends BoxWeight{
    int M;

    public BoxMaterial(int l, int b, int h, int w, int m) {
        super(l, b, h, w);
        M = m;
    }

    public static void main(String[] args) {
        BoxMaterial obj=new BoxMaterial(1,2,3,4,3);
        System.out.println(obj.l);
    }
}
