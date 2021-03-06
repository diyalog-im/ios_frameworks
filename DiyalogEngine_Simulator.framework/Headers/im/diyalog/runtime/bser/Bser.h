//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/bser/Bser.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeBserBser")
#ifdef RESTRICT_ImDiyalogRuntimeBserBser
#define INCLUDE_ALL_ImDiyalogRuntimeBserBser 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeBserBser 1
#endif
#undef RESTRICT_ImDiyalogRuntimeBserBser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARBser_) && (INCLUDE_ALL_ImDiyalogRuntimeBserBser || defined(INCLUDE_ARBser))
#define ARBser_

@class ARBserObject;
@class ARDataInput;
@class IOSByteArray;
@protocol ARBserCreator;

@interface ARBser : NSObject

#pragma mark Public

+ (id)parseWithARBserCreator:(id<ARBserCreator>)creator
               withByteArray:(IOSByteArray *)data;

+ (id)parseWithARBserObject:(ARBserObject *)res
              withByteArray:(IOSByteArray *)data;

+ (id)parseWithARBserObject:(ARBserObject *)res
            withARDataInput:(ARDataInput *)inputStream;

@end

J2OBJC_EMPTY_STATIC_INIT(ARBser)

FOUNDATION_EXPORT id ARBser_parseWithARBserCreator_withByteArray_(id<ARBserCreator> creator, IOSByteArray *data);

FOUNDATION_EXPORT id ARBser_parseWithARBserObject_withByteArray_(ARBserObject *res, IOSByteArray *data);

FOUNDATION_EXPORT id ARBser_parseWithARBserObject_withARDataInput_(ARBserObject *res, ARDataInput *inputStream);

J2OBJC_TYPE_LITERAL_HEADER(ARBser)

@compatibility_alias ImDiyalogRuntimeBserBser ARBser;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeBserBser")
