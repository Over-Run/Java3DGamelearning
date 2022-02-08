package io.github.overrun.java3DGameLearning.natives;

import java.sql.Struct;

public class WindowHandle {
	public native void createWindow(int width, int height, String title);
	public native boolean isClosed();
	public native void glEnd();
	public native void glfwSwapBuffers();
	public native void glfwPollEvents();
	public native void glBegin();
	public native void glClear(int mask);
	public native void glVertex2d(double x, double y);
	public native void glfwTerminate();
	public native void glfwMakeContextCurrent();
	public native boolean glfwInit();
}
