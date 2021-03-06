//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/CallMemberState.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelCallMemberState")
#ifdef RESTRICT_ImDiyalogCoreViewmodelCallMemberState
#define INCLUDE_ALL_ImDiyalogCoreViewmodelCallMemberState 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelCallMemberState 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelCallMemberState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACCallMemberState_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelCallMemberState || defined(INCLUDE_ACCallMemberState))
#define ACCallMemberState_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

@class ARApiCallMemberStateHolder;

typedef NS_ENUM(NSUInteger, ACCallMemberState_Enum) {
  ACCallMemberState_Enum_RINGING = 0,
  ACCallMemberState_Enum_RINGING_REACHED = 1,
  ACCallMemberState_Enum_CONNECTING = 2,
  ACCallMemberState_Enum_IN_PROGRESS = 3,
  ACCallMemberState_Enum_ENDED = 4,
};

@interface ACCallMemberState : JavaLangEnum < NSCopying >

+ (ACCallMemberState *)RINGING;

+ (ACCallMemberState *)RINGING_REACHED;

+ (ACCallMemberState *)CONNECTING;

+ (ACCallMemberState *)IN_PROGRESS;

+ (ACCallMemberState *)ENDED;

#pragma mark Public

+ (ACCallMemberState *)fromWithARApiCallMemberStateHolder:(ARApiCallMemberStateHolder *)state;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ACCallMemberState *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ACCallMemberState_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ACCallMemberState)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ACCallMemberState *ACCallMemberState_values_[];

inline ACCallMemberState *ACCallMemberState_get_RINGING();
J2OBJC_ENUM_CONSTANT(ACCallMemberState, RINGING)

inline ACCallMemberState *ACCallMemberState_get_RINGING_REACHED();
J2OBJC_ENUM_CONSTANT(ACCallMemberState, RINGING_REACHED)

inline ACCallMemberState *ACCallMemberState_get_CONNECTING();
J2OBJC_ENUM_CONSTANT(ACCallMemberState, CONNECTING)

inline ACCallMemberState *ACCallMemberState_get_IN_PROGRESS();
J2OBJC_ENUM_CONSTANT(ACCallMemberState, IN_PROGRESS)

inline ACCallMemberState *ACCallMemberState_get_ENDED();
J2OBJC_ENUM_CONSTANT(ACCallMemberState, ENDED)

FOUNDATION_EXPORT ACCallMemberState *ACCallMemberState_fromWithARApiCallMemberStateHolder_(ARApiCallMemberStateHolder *state);

FOUNDATION_EXPORT IOSObjectArray *ACCallMemberState_values();

FOUNDATION_EXPORT ACCallMemberState *ACCallMemberState_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ACCallMemberState *ACCallMemberState_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ACCallMemberState)

@compatibility_alias ImDiyalogCoreViewmodelCallMemberState ACCallMemberState;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelCallMemberState")
