/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_github_overrun_java3DGameLearning_natives_WindowHandle */

#ifndef _Included_io_github_overrun_java3DGameLearning_natives_WindowHandle
#define _Included_io_github_overrun_java3DGameLearning_natives_WindowHandle
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    createWindow
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_createWindow
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    isClosed
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_isClosed
  (JNIEnv *, jobject);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glEnd
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glEnd
  (JNIEnv *, jobject);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glfwSwapBuffers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glfwSwapBuffers
  (JNIEnv *, jobject);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glfwPollEvents
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glfwPollEvents
  (JNIEnv *, jobject);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glBegin
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glBegin
  (JNIEnv *, jobject);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glClear
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glClear
  (JNIEnv *, jobject, jint);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glVertex2d
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glVertex2d
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glfwTerminate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glfwTerminate
  (JNIEnv *, jobject);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glfwMakeContextCurrent
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glfwMakeContextCurrent
  (JNIEnv *, jobject);

/*
 * Class:     io_github_overrun_java3DGameLearning_natives_WindowHandle
 * Method:    glfwInit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_io_github_overrun_java3DGameLearning_natives_WindowHandle_glfwInit
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
