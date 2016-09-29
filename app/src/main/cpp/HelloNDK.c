#include <jni.h>

JNIEXPORT jstring Java_com_clem_leon_ndkdemo_HelloNDK_sayHelloNDK(JNIEnv *env, jclass type) {

    // TODO


    return (*env)->NewStringUTF(env, "this String come from C ");
}