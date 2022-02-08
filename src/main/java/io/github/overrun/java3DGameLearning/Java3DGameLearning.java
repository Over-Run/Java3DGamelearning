package io.github.overrun.java3DGameLearning;


import io.github.overrun.java3DGameLearning.natives.HelloWorld;
import io.github.overrun.java3DGameLearning.natives.WindowHandle;

import java.io.File;

public class Java3DGameLearning {

	private static Thread thread;
	private static Runnable runnable;
	public static void main(String[] args) {
		runnable = () -> {
			System.loadLibrary("HelloWorldDll");
			System.loadLibrary("WindowHandle");
			printHelloWorld();
			while (true) {
				windowHandle.createWindow(800,600, "Hello World");
			}
		};
		thread = new Thread(runnable, "Java3DGameLearning");
		thread.start();
	}

	private static final HelloWorld helloWorld = new HelloWorld();
	private static final WindowHandle windowHandle = new WindowHandle();

	public static void printHelloWorld() {
		helloWorld.printHelloWorld();

	}
}
