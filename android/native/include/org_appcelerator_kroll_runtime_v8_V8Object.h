/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_appcelerator_kroll_runtime_v8_V8Object */

#ifndef _Included_org_appcelerator_kroll_runtime_v8_V8Object
#define _Included_org_appcelerator_kroll_runtime_v8_V8Object
#ifdef __cplusplus
extern "C" {
#endif
#undef org_appcelerator_kroll_runtime_v8_V8Object_MSG_RELEASE
#define org_appcelerator_kroll_runtime_v8_V8Object_MSG_RELEASE 100L
#undef org_appcelerator_kroll_runtime_v8_V8Object_MSG_SET_WINDOW
#define org_appcelerator_kroll_runtime_v8_V8Object_MSG_SET_WINDOW 101L
#undef org_appcelerator_kroll_runtime_v8_V8Object_MSG_LAST_ID
#define org_appcelerator_kroll_runtime_v8_V8Object_MSG_LAST_ID 101L
/*
 * Class:     org_appcelerator_kroll_runtime_v8_V8Object
 * Method:    nativeInitObject
 * Signature: (Ljava/lang/Class;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_appcelerator_kroll_runtime_v8_V8Object_nativeInitObject
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     org_appcelerator_kroll_runtime_v8_V8Object
 * Method:    nativeRelease
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_appcelerator_kroll_runtime_v8_V8Object_nativeRelease
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_appcelerator_kroll_runtime_v8_V8Object
 * Method:    nativeSetProperty
 * Signature: (JLjava/lang/String;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_appcelerator_kroll_runtime_v8_V8Object_nativeSetProperty
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     org_appcelerator_kroll_runtime_v8_V8Object
 * Method:    nativeFireEvent
 * Signature: (JLjava/lang/String;Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_appcelerator_kroll_runtime_v8_V8Object_nativeFireEvent
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     org_appcelerator_kroll_runtime_v8_V8Object
 * Method:    nativeSetWindow
 * Signature: (JLjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_appcelerator_kroll_runtime_v8_V8Object_nativeSetWindow
  (JNIEnv *, jobject, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
