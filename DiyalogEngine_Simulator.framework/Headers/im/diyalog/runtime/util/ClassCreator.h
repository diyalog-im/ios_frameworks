//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/util/ClassCreator.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreator")
#ifdef RESTRICT_ImDiyalogRuntimeUtilClassCreator
#define INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreator 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreator 1
#endif
#undef RESTRICT_ImDiyalogRuntimeUtilClassCreator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeUtilClassCreator_) && (INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreator || defined(INCLUDE_ImDiyalogRuntimeUtilClassCreator))
#define ImDiyalogRuntimeUtilClassCreator_

/*!
 @brief Interface for creating objects without reflection
 */
@protocol ImDiyalogRuntimeUtilClassCreator < NSObject, JavaObject >

/*!
 @brief Create instance of object
 @return created object
 */
- (id)newInstance OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeUtilClassCreator)

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeUtilClassCreator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeUtilClassCreator")
