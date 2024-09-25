#include <jni.h>
#include <string>
#include "dog.h"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_hanbikan_ndkplayground_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    Dog dog("Doggo");
    return env->NewStringUTF(dog.getName().c_str());
}