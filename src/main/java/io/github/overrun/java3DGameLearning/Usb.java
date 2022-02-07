package io.github.overrun.java3DGameLearning;

public class Usb {
	private static final Usb usb = new Usb();

	public Usb() { }

	public static Usb getInstance() {
		return usb;
	}
}
