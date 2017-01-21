#include <com_woodward_threadific_NativeClass.h>

JNIEXPORT jstring JNICALL Java_com_woodward_threadific_NativeClass_getMessageFromJNI
  (JNIEnv *env, jclass obj){
    return env->NewStringUTF("This is a message from JNI");
}

