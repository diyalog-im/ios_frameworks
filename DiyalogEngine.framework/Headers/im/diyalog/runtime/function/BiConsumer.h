//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/function/BiConsumer.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeFunctionBiConsumer")
#ifdef RESTRICT_ImDiyalogRuntimeFunctionBiConsumer
#define INCLUDE_ALL_ImDiyalogRuntimeFunctionBiConsumer 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeFunctionBiConsumer 1
#endif
#undef RESTRICT_ImDiyalogRuntimeFunctionBiConsumer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARBiConsumer_) && (INCLUDE_ALL_ImDiyalogRuntimeFunctionBiConsumer || defined(INCLUDE_ARBiConsumer))
#define ARBiConsumer_

@protocol ARBiConsumer < NSObject, JavaObject >

- (void)acceptWithId:(id)t
              withId:(id)u;

@end

J2OBJC_EMPTY_STATIC_INIT(ARBiConsumer)

J2OBJC_TYPE_LITERAL_HEADER(ARBiConsumer)

#define ImDiyalogRuntimeFunctionBiConsumer ARBiConsumer

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeFunctionBiConsumer")
