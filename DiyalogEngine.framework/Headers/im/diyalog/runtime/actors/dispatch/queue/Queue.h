//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/dispatch/queue/Queue.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsDispatchQueueQueue")
#ifdef RESTRICT_ImDiyalogRuntimeActorsDispatchQueueQueue
#define INCLUDE_ALL_ImDiyalogRuntimeActorsDispatchQueueQueue 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsDispatchQueueQueue 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsDispatchQueueQueue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeActorsDispatchQueueQueue_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsDispatchQueueQueue || defined(INCLUDE_ImDiyalogRuntimeActorsDispatchQueueQueue))
#define ImDiyalogRuntimeActorsDispatchQueueQueue_

@class JavaUtilLinkedList;

@interface ImDiyalogRuntimeActorsDispatchQueueQueue : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)id_;

- (jint)getId;

- (JavaUtilLinkedList *)getQueue;

- (jboolean)isLocked;

- (void)setIsLockedWithBoolean:(jboolean)isLocked;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeActorsDispatchQueueQueue)

FOUNDATION_EXPORT void ImDiyalogRuntimeActorsDispatchQueueQueue_initWithInt_(ImDiyalogRuntimeActorsDispatchQueueQueue *self, jint id_);

FOUNDATION_EXPORT ImDiyalogRuntimeActorsDispatchQueueQueue *new_ImDiyalogRuntimeActorsDispatchQueueQueue_initWithInt_(jint id_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeActorsDispatchQueueQueue *create_ImDiyalogRuntimeActorsDispatchQueueQueue_initWithInt_(jint id_);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeActorsDispatchQueueQueue)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsDispatchQueueQueue")
