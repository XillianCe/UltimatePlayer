#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_newbee_ultimateplayer_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "fuck from c++";
    return env->NewStringUTF(hello.c_str());
}
