//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/ContentType.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentType")
#ifdef RESTRICT_ImDiyalogCoreEntityContentType
#define INCLUDE_ALL_ImDiyalogCoreEntityContentType 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityContentType 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityContentType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACContentType_) && (INCLUDE_ALL_ImDiyalogCoreEntityContentType || defined(INCLUDE_ACContentType))
#define ACContentType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ACContentType_Enum) {
  ACContentType_Enum_TEXT = 0,
  ACContentType_Enum_NONE = 1,
  ACContentType_Enum_DOCUMENT = 2,
  ACContentType_Enum_DOCUMENT_PHOTO = 3,
  ACContentType_Enum_DOCUMENT_VIDEO = 4,
  ACContentType_Enum_DOCUMENT_AUDIO = 5,
  ACContentType_Enum_CONTACT = 6,
  ACContentType_Enum_LOCATION = 7,
  ACContentType_Enum_STICKER = 8,
  ACContentType_Enum_SERVICE = 9,
  ACContentType_Enum_SERVICE_ADD = 10,
  ACContentType_Enum_SERVICE_KICK = 11,
  ACContentType_Enum_SERVICE_LEAVE = 12,
  ACContentType_Enum_SERVICE_REGISTERED = 13,
  ACContentType_Enum_SERVICE_CREATED = 14,
  ACContentType_Enum_SERVICE_JOINED = 15,
  ACContentType_Enum_SERVICE_TITLE = 16,
  ACContentType_Enum_SERVICE_AVATAR = 17,
  ACContentType_Enum_SERVICE_AVATAR_REMOVED = 18,
  ACContentType_Enum_CUSTOM_JSON_MESSAGE = 19,
  ACContentType_Enum_SERVICE_CALL_ENDED = 20,
  ACContentType_Enum_SERVICE_CALL_MISSED = 21,
  ACContentType_Enum_UNKNOWN_CONTENT = 22,
  ACContentType_Enum_SPEECH_CONTENT = 23,
  ACContentType_Enum_SPEECH_RECOGNIZED_TEXT_CONTENT = 24,
  ACContentType_Enum_GENERIC_TEMPLATE_CONTENT = 25,
  ACContentType_Enum_QUICK_REPLY_CONTENT = 26,
  ACContentType_Enum_BUTTON_TEMPLATE_CONTENT = 27,
};

@interface ACContentType : JavaLangEnum < NSCopying > {
 @public
  jint value_;
}

+ (ACContentType *)TEXT;

+ (ACContentType *)NONE;

+ (ACContentType *)DOCUMENT;

+ (ACContentType *)DOCUMENT_PHOTO;

+ (ACContentType *)DOCUMENT_VIDEO;

+ (ACContentType *)DOCUMENT_AUDIO;

+ (ACContentType *)CONTACT;

+ (ACContentType *)LOCATION;

+ (ACContentType *)STICKER;

+ (ACContentType *)SERVICE;

+ (ACContentType *)SERVICE_ADD;

+ (ACContentType *)SERVICE_KICK;

+ (ACContentType *)SERVICE_LEAVE;

+ (ACContentType *)SERVICE_REGISTERED;

+ (ACContentType *)SERVICE_CREATED;

+ (ACContentType *)SERVICE_JOINED;

+ (ACContentType *)SERVICE_TITLE;

+ (ACContentType *)SERVICE_AVATAR;

+ (ACContentType *)SERVICE_AVATAR_REMOVED;

+ (ACContentType *)CUSTOM_JSON_MESSAGE;

+ (ACContentType *)SERVICE_CALL_ENDED;

+ (ACContentType *)SERVICE_CALL_MISSED;

+ (ACContentType *)UNKNOWN_CONTENT;

+ (ACContentType *)SPEECH_CONTENT;

+ (ACContentType *)SPEECH_RECOGNIZED_TEXT_CONTENT;

+ (ACContentType *)GENERIC_TEMPLATE_CONTENT;

+ (ACContentType *)QUICK_REPLY_CONTENT;

+ (ACContentType *)BUTTON_TEMPLATE_CONTENT;

#pragma mark Public

+ (ACContentType *)fromValueWithInt:(jint)value;

- (jint)getValue;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ACContentType *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ACContentType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ACContentType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ACContentType *ACContentType_values_[];

inline ACContentType *ACContentType_get_TEXT();
J2OBJC_ENUM_CONSTANT(ACContentType, TEXT)

inline ACContentType *ACContentType_get_NONE();
J2OBJC_ENUM_CONSTANT(ACContentType, NONE)

inline ACContentType *ACContentType_get_DOCUMENT();
J2OBJC_ENUM_CONSTANT(ACContentType, DOCUMENT)

inline ACContentType *ACContentType_get_DOCUMENT_PHOTO();
J2OBJC_ENUM_CONSTANT(ACContentType, DOCUMENT_PHOTO)

inline ACContentType *ACContentType_get_DOCUMENT_VIDEO();
J2OBJC_ENUM_CONSTANT(ACContentType, DOCUMENT_VIDEO)

inline ACContentType *ACContentType_get_DOCUMENT_AUDIO();
J2OBJC_ENUM_CONSTANT(ACContentType, DOCUMENT_AUDIO)

inline ACContentType *ACContentType_get_CONTACT();
J2OBJC_ENUM_CONSTANT(ACContentType, CONTACT)

inline ACContentType *ACContentType_get_LOCATION();
J2OBJC_ENUM_CONSTANT(ACContentType, LOCATION)

inline ACContentType *ACContentType_get_STICKER();
J2OBJC_ENUM_CONSTANT(ACContentType, STICKER)

inline ACContentType *ACContentType_get_SERVICE();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE)

inline ACContentType *ACContentType_get_SERVICE_ADD();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_ADD)

inline ACContentType *ACContentType_get_SERVICE_KICK();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_KICK)

inline ACContentType *ACContentType_get_SERVICE_LEAVE();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_LEAVE)

inline ACContentType *ACContentType_get_SERVICE_REGISTERED();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_REGISTERED)

inline ACContentType *ACContentType_get_SERVICE_CREATED();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_CREATED)

inline ACContentType *ACContentType_get_SERVICE_JOINED();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_JOINED)

inline ACContentType *ACContentType_get_SERVICE_TITLE();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_TITLE)

inline ACContentType *ACContentType_get_SERVICE_AVATAR();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_AVATAR)

inline ACContentType *ACContentType_get_SERVICE_AVATAR_REMOVED();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_AVATAR_REMOVED)

inline ACContentType *ACContentType_get_CUSTOM_JSON_MESSAGE();
J2OBJC_ENUM_CONSTANT(ACContentType, CUSTOM_JSON_MESSAGE)

inline ACContentType *ACContentType_get_SERVICE_CALL_ENDED();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_CALL_ENDED)

inline ACContentType *ACContentType_get_SERVICE_CALL_MISSED();
J2OBJC_ENUM_CONSTANT(ACContentType, SERVICE_CALL_MISSED)

inline ACContentType *ACContentType_get_UNKNOWN_CONTENT();
J2OBJC_ENUM_CONSTANT(ACContentType, UNKNOWN_CONTENT)

inline ACContentType *ACContentType_get_SPEECH_CONTENT();
J2OBJC_ENUM_CONSTANT(ACContentType, SPEECH_CONTENT)

inline ACContentType *ACContentType_get_SPEECH_RECOGNIZED_TEXT_CONTENT();
J2OBJC_ENUM_CONSTANT(ACContentType, SPEECH_RECOGNIZED_TEXT_CONTENT)

inline ACContentType *ACContentType_get_GENERIC_TEMPLATE_CONTENT();
J2OBJC_ENUM_CONSTANT(ACContentType, GENERIC_TEMPLATE_CONTENT)

inline ACContentType *ACContentType_get_QUICK_REPLY_CONTENT();
J2OBJC_ENUM_CONSTANT(ACContentType, QUICK_REPLY_CONTENT)

inline ACContentType *ACContentType_get_BUTTON_TEMPLATE_CONTENT();
J2OBJC_ENUM_CONSTANT(ACContentType, BUTTON_TEMPLATE_CONTENT)

FOUNDATION_EXPORT ACContentType *ACContentType_fromValueWithInt_(jint value);

FOUNDATION_EXPORT IOSObjectArray *ACContentType_values();

FOUNDATION_EXPORT ACContentType *ACContentType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ACContentType *ACContentType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ACContentType)

@compatibility_alias ImDiyalogCoreEntityContentType ACContentType;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentType")