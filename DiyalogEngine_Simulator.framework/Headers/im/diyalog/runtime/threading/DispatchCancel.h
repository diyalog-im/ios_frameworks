//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/threading/DispatchCancel.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatchCancel")
#ifdef RESTRICT_ImDiyalogRuntimeThreadingDispatchCancel
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatchCancel 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatchCancel 1
#endif
#undef RESTRICT_ImDiyalogRuntimeThreadingDispatchCancel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDispatchCancel_) && (INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatchCancel || defined(INCLUDE_ARDispatchCancel))
#define ARDispatchCancel_

@protocol ARDispatchCancel < NSObject, JavaObject >

- (void)cancel;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDispatchCancel)

J2OBJC_TYPE_LITERAL_HEADER(ARDispatchCancel)

#define ImDiyalogRuntimeThreadingDispatchCancel ARDispatchCancel

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatchCancel")