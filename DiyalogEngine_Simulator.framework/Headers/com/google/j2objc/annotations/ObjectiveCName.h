//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/com/google/j2objc/annotations/ObjectiveCName.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName")
#ifdef RESTRICT_ComGoogleJ2objcAnnotationsObjectiveCName
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName 1
#endif
#undef RESTRICT_ComGoogleJ2objcAnnotationsObjectiveCName

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ComGoogleJ2objcAnnotationsObjectiveCName_) && (INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName || defined(INCLUDE_ComGoogleJ2objcAnnotationsObjectiveCName))
#define ComGoogleJ2objcAnnotationsObjectiveCName_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
@import j2objc;

@class IOSClass;

/*!
 @brief Annotation that specifies what the Objective-C class, protocol, method,
 constructor or package declaration should be when translated.
 Though this interface is marked with <code>RetentionPolicy.RUNTIME</code>,
 it will not be emitted in transpiled output from the J2ObjC transpiler.
 This is the only annotation ignored in this way.
 @author Tom Ball
 */
@protocol ComGoogleJ2objcAnnotationsObjectiveCName < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

@end

@interface ComGoogleJ2objcAnnotationsObjectiveCName : NSObject < ComGoogleJ2objcAnnotationsObjectiveCName > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcAnnotationsObjectiveCName)

FOUNDATION_EXPORT id<ComGoogleJ2objcAnnotationsObjectiveCName> create_ComGoogleJ2objcAnnotationsObjectiveCName(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcAnnotationsObjectiveCName)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcAnnotationsObjectiveCName")