package io.github.overrun.java3DGameLearning;


import io.github.overrun.java3DGameLearning.natives.HelloWorld;
import io.github.overrun.java3DGameLearning.natives.Random;
import io.github.overrun.java3DGameLearning.natives.WindowHandle;


public class Java3DGameLearning {

	public static void main(String[] args) {
		System.loadLibrary("WindowHandle");
		if(!windowHandle.glfwInit()) {
			printHelloWorld("Failed to initialize GLFW");
		}
		windowHandle.createWindow(800,600, "Hello World");
		windowHandle.glfwMakeContextCurrent();
		while (isClosed()) {
			printHelloWorld(String.valueOf(random.random(1)));
			windowHandle.glClear(0x00004000);
			windowHandle.glBegin();
			windowHandle.glVertex3d(0.5f, 0.5f,0.5f);
			windowHandle.glVertex3d(-0.5f, -0.5f,0f);
			windowHandle.glVertex3d(0.5f, -0.5f,0.6f);
			windowHandle.glColor3d(1.0f,0f,1.0f);

			windowHandle.glEnd();
			windowHandle.glfwSwapBuffers();
			windowHandle.glfwPollEvents();

		}
		windowHandle.glfwTerminate();
	}

	private static final HelloWorld helloWorld = new HelloWorld();
	private static final WindowHandle windowHandle = new WindowHandle();
	private static final Random random = new Random();
	public static void printHelloWorld(String message) {
		helloWorld.printHelloWorld(message);
	}

	public static boolean isClosed() {
		return windowHandle.isClosed();
	}
}
