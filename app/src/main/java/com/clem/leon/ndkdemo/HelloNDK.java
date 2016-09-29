package com.clem.leon.ndkdemo;

/**
 * User: Leon Lai
 * Date: 2016-09-29
 */
public class HelloNDK {
    public static native String sayHelloNDK() ;

    static {
        System.loadLibrary("HelloNDK");
    }
}
