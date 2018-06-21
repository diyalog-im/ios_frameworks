//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/threading/ThreadDispatcher.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingThreadDispatcher")
#ifdef RESTRICT_ImDiyalogRuntimeThreadingThreadDispatcher
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingThreadDispatcher 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingThreadDispatcher 1
#endif
#undef RESTRICT_ImDiyalogRuntimeThreadingThreadDispatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARThreadDispatcher_) && (INCLUDE_ALL_ImDiyalogRuntimeThreadingThreadDispatcher || defined(INCLUDE_ARThreadDispatcher))
#define ARThreadDispatcher_

@protocol ARSimpleDispatcher;
@protocol JavaLangRunnable;

@interface ARThreadDispatcher : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)dispatchOnCurrentThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

+ (id<ARSimpleDispatcher>)peekDispatcher;

+ (void)popDispatcher;

+ (void)pushDispatcherWithARSimpleDispatcher:(id<ARSimpleDispatcher>)dispatcher;

@end

J2OBJC_STATIC_INIT(ARThreadDispatcher)

FOUNDATION_EXPORT void ARThreadDispatcher_pushDispatcherWithARSimpleDispatcher_(id<ARSimpleDispatcher> dispatcher);

FOUNDATION_EXPORT void ARThreadDispatcher_popDispatcher();

FOUNDATION_EXPORT id<ARSimpleDispatcher> ARThreadDispatcher_peekDispatcher();

FOUNDATION_EXPORT void ARThreadDispatcher_dispatchOnCurrentThreadWithJavaLangRunnable_(id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT void ARThreadDispatcher_init(ARThreadDispatcher *self);

FOUNDATION_EXPORT ARThreadDispatcher *new_ARThreadDispatcher_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARThreadDispatcher *create_ARThreadDispatcher_init();

J2OBJC_TYPE_LITERAL_HEADER(ARThreadDispatcher)

@compatibility_alias ImDiyalogRuntimeThreadingThreadDispatcher ARThreadDispatcher;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingThreadDispatcher")