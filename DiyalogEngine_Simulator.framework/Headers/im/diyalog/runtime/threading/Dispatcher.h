//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/threading/Dispatcher.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatcher")
#ifdef RESTRICT_ImDiyalogRuntimeThreadingDispatcher
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatcher 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatcher 1
#endif
#undef RESTRICT_ImDiyalogRuntimeThreadingDispatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDispatcher_) && (INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatcher || defined(INCLUDE_ARDispatcher))
#define ARDispatcher_

@protocol ARDispatchCancel;
@protocol JavaLangRunnable;

@protocol ARDispatcher < NSObject, JavaObject >

- (id<ARDispatchCancel>)dispatchWithJavaLangRunnable:(id<JavaLangRunnable>)message
                                            withLong:(jlong)delay;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDispatcher)

J2OBJC_TYPE_LITERAL_HEADER(ARDispatcher)

#define ImDiyalogRuntimeThreadingDispatcher ARDispatcher

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingDispatcher")