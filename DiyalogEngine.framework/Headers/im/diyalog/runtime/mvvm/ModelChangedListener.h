//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/mvvm/ModelChangedListener.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMvvmModelChangedListener")
#ifdef RESTRICT_ImDiyalogRuntimeMvvmModelChangedListener
#define INCLUDE_ALL_ImDiyalogRuntimeMvvmModelChangedListener 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMvvmModelChangedListener 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMvvmModelChangedListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARModelChangedListener_) && (INCLUDE_ALL_ImDiyalogRuntimeMvvmModelChangedListener || defined(INCLUDE_ARModelChangedListener))
#define ARModelChangedListener_

@protocol ARModelChangedListener < NSObject, JavaObject >

- (void)onChanged:(id)model;

@end

J2OBJC_EMPTY_STATIC_INIT(ARModelChangedListener)

J2OBJC_TYPE_LITERAL_HEADER(ARModelChangedListener)

#define ImDiyalogRuntimeMvvmModelChangedListener ARModelChangedListener

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMvvmModelChangedListener")