//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/AppleChangeListener.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleChangeListener")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmAppleChangeListener
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleChangeListener 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleChangeListener 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmAppleChangeListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAppleChangeListener_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleChangeListener || defined(INCLUDE_ARAppleChangeListener))
#define ARAppleChangeListener_

@class ARAppleListUpdate;

/*!
 @brief Created by tolga on 21/11/2016.
 */
@protocol ARAppleChangeListener < NSObject, JavaObject >

- (void)onCollectionChangedWithChanges:(ARAppleListUpdate *)modification;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAppleChangeListener)

J2OBJC_TYPE_LITERAL_HEADER(ARAppleChangeListener)

#define ImDiyalogRuntimeGenericMvvmAppleChangeListener ARAppleChangeListener

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAppleChangeListener")
