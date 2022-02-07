package io.github.overrun.java3DGameLearning;


import io.github.overrun.java3DGameLearning.natives.HelloWorld;

import java.io.File;

public class Java3DGameLearning {

	private static Thread thread;
	private static Runnable runnable;
	public static void main(String[] args) {
		runnable = () -> {
			System.loadLibrary("HelloWorldDll");
			printHelloWorld();
		};
		thread = new Thread(runnable, "Java3DGameLearning");
		thread.start();
	}

	private static final HelloWorld helloWorld = new HelloWorld();


	public static void printHelloWorld() {
		helloWorld.printHelloWorld();
	}
}
