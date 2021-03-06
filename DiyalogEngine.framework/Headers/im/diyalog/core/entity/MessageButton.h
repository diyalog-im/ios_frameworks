//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/MessageButton.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityMessageButton")
#ifdef RESTRICT_ImDiyalogCoreEntityMessageButton
#define INCLUDE_ALL_ImDiyalogCoreEntityMessageButton 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityMessageButton 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityMessageButton

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACMessageButton_) && (INCLUDE_ALL_ImDiyalogCoreEntityMessageButton || defined(INCLUDE_ACMessageButton))
#define ACMessageButton_

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief Created by tolga on 06/07/2017.
 */
@interface ACMessageButton : NSObject
@property (readonly, copy, nonatomic, getter=getType) NSString *type;
@property (readonly, copy, nonatomic, getter=getTitle) NSString *title;
@property (readonly, copy, nonatomic, getter=getPayload) NSString *payload;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nullable)type
                    withNSString:(NSString * __nullable)title
                    withNSString:(NSString * __nullable)payload;

- (NSString * __nullable)getPayload;

- (NSString * __nullable)getTitle;

- (NSString * __nullable)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(ACMessageButton)

FOUNDATION_EXPORT void ACMessageButton_init(ACMessageButton *self);

FOUNDATION_EXPORT ACMessageButton *new_ACMessageButton_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACMessageButton *create_ACMessageButton_init();

FOUNDATION_EXPORT void ACMessageButton_initWithNSString_withNSString_withNSString_(ACMessageButton *self, NSString *type, NSString *title, NSString *payload);

FOUNDATION_EXPORT ACMessageButton *new_ACMessageButton_initWithNSString_withNSString_withNSString_(NSString *type, NSString *title, NSString *payload) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACMessageButton *create_ACMessageButton_initWithNSString_withNSString_withNSString_(NSString *type, NSString *title, NSString *payload);

J2OBJC_TYPE_LITERAL_HEADER(ACMessageButton)

@compatibility_alias ImDiyalogCoreEntityMessageButton ACMessageButton;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityMessageButton")
