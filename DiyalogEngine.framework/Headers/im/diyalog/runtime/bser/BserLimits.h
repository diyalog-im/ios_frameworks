//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/bser/BserLimits.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeBserBserLimits")
#ifdef RESTRICT_ImDiyalogRuntimeBserBserLimits
#define INCLUDE_ALL_ImDiyalogRuntimeBserBserLimits 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeBserBserLimits 1
#endif
#undef RESTRICT_ImDiyalogRuntimeBserBserLimits

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARBserLimits_) && (INCLUDE_ALL_ImDiyalogRuntimeBserBserLimits || defined(INCLUDE_ARBserLimits))
#define ARBserLimits_

@interface ARBserLimits : NSObject

+ (jint)MAX_BLOCK_SIZE;

+ (jint)MAX_PROTO_REPEATED;

@end

J2OBJC_EMPTY_STATIC_INIT(ARBserLimits)

inline jint ARBserLimits_get_MAX_BLOCK_SIZE();
#define ARBserLimits_MAX_BLOCK_SIZE 1048576
J2OBJC_STATIC_FIELD_CONSTANT(ARBserLimits, MAX_BLOCK_SIZE, jint)

inline jint ARBserLimits_get_MAX_PROTO_REPEATED();
#define ARBserLimits_MAX_PROTO_REPEATED 1048576
J2OBJC_STATIC_FIELD_CONSTANT(ARBserLimits, MAX_PROTO_REPEATED, jint)

J2OBJC_TYPE_LITERAL_HEADER(ARBserLimits)

@compatibility_alias ImDiyalogRuntimeBserBserLimits ARBserLimits;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeBserBserLimits")