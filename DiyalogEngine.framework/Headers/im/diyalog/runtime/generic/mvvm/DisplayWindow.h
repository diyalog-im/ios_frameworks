//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/DisplayWindow.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayWindow")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmDisplayWindow
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayWindow 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayWindow 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmDisplayWindow

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDisplayWindow_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayWindow || defined(INCLUDE_ARDisplayWindow))
#define ARDisplayWindow_

@class JavaLangLong;

@interface ARDisplayWindow : NSObject

#pragma mark Public

- (void)completeForwardLoading;

- (void)completeInitBackwardWithJavaLangLong:(JavaLangLong *)head;

- (void)completeInitCenterWithJavaLangLong:(JavaLangLong *)forwardHead
                          withJavaLangLong:(JavaLangLong *)backwardHead;

- (void)completeInitForwardWithJavaLangLong:(JavaLangLong *)tail;

- (void)emptyInit;

- (void)endBackwardLoading;

- (JavaLangLong *)getCurrentBackwardHead;

- (JavaLangLong *)getCurrentForwardHead;

- (jboolean)isBackwardLoaded;

- (jboolean)isForwardCompleted;

- (jboolean)isInited;

- (void)onBackwardCompleted;

- (void)onBackwardSliceLoadedWithJavaLangLong:(JavaLangLong *)head;

- (void)onForwardCompleted;

- (void)onForwardSliceLoadedWithJavaLangLong:(JavaLangLong *)tail;

- (jboolean)startBackwardLoading;

- (jboolean)startForwardLoading;

- (void)startInitBackward;

- (void)startInitCenter;

- (void)startInitForward;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDisplayWindow)

FOUNDATION_EXPORT void ARDisplayWindow_init(ARDisplayWindow *self);

FOUNDATION_EXPORT ARDisplayWindow *new_ARDisplayWindow_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDisplayWindow *create_ARDisplayWindow_init();

J2OBJC_TYPE_LITERAL_HEADER(ARDisplayWindow)

@compatibility_alias ImDiyalogRuntimeGenericMvvmDisplayWindow ARDisplayWindow;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayWindow")