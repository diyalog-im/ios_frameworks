//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/AndroidChangeListener.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidChangeListener")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmAndroidChangeListener
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidChangeListener 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidChangeListener 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmAndroidChangeListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAndroidChangeListener_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidChangeListener || defined(INCLUDE_ARAndroidChangeListener))
#define ARAndroidChangeListener_

@class ARAndroidListUpdate;

/*!
 @brief Created by tolga on 21/11/2016.
 */
@protocol ARAndroidChangeListener < NSObject, JavaObject >

- (void)onCollectionChangedWithChanges:(ARAndroidListUpdate *)modification;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAndroidChangeListener)

J2OBJC_TYPE_LITERAL_HEADER(ARAndroidChangeListener)

#define ImDiyalogRuntimeGenericMvvmAndroidChangeListener ARAndroidChangeListener

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAndroidChangeListener")