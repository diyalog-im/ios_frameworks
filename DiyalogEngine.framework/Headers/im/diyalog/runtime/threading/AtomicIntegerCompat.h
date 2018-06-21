//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/threading/AtomicIntegerCompat.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicIntegerCompat")
#ifdef RESTRICT_ImDiyalogRuntimeThreadingAtomicIntegerCompat
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicIntegerCompat 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicIntegerCompat 1
#endif
#undef RESTRICT_ImDiyalogRuntimeThreadingAtomicIntegerCompat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAtomicIntegerCompat_) && (INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicIntegerCompat || defined(INCLUDE_ARAtomicIntegerCompat))
#define ARAtomicIntegerCompat_

/*!
 @brief Abstract Atomic Integer
 */
@interface ARAtomicIntegerCompat : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Set if value equals exp
 @param exp expected value
 @param v   value
 */
- (void)compareAndSetWithInt:(jint)exp
                     withInt:(jint)v;

/*!
 @brief Get integer value
 @return the value
 */
- (jint)get;

/*!
 @brief Get value and increment
 @return value before increment
 */
- (jint)getAndIncrement;

/*!
 @brief Increment and get value
 @return incremented value
 */
- (jint)incrementAndGet;

/*!
 @brief Set Value
 @param v new value
 */
- (void)setWithInt:(jint)v;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAtomicIntegerCompat)

FOUNDATION_EXPORT void ARAtomicIntegerCompat_init(ARAtomicIntegerCompat *self);

J2OBJC_TYPE_LITERAL_HEADER(ARAtomicIntegerCompat)

@compatibility_alias ImDiyalogRuntimeThreadingAtomicIntegerCompat ARAtomicIntegerCompat;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeThreadingAtomicIntegerCompat")