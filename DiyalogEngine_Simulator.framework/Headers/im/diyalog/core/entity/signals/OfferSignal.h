//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/signals/OfferSignal.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntitySignalsOfferSignal")
#ifdef RESTRICT_ImDiyalogCoreEntitySignalsOfferSignal
#define INCLUDE_ALL_ImDiyalogCoreEntitySignalsOfferSignal 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntitySignalsOfferSignal 1
#endif
#undef RESTRICT_ImDiyalogCoreEntitySignalsOfferSignal

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreEntitySignalsOfferSignal_) && (INCLUDE_ALL_ImDiyalogCoreEntitySignalsOfferSignal || defined(INCLUDE_ImDiyalogCoreEntitySignalsOfferSignal))
#define ImDiyalogCoreEntitySignalsOfferSignal_

#define RESTRICT_ImDiyalogCoreEntitySignalsAbsSignal 1
#define INCLUDE_ImDiyalogCoreEntitySignalsAbsSignal 1
#include "../../../../../im/diyalog/core/entity/signals/AbsSignal.h"

@class ARBserValues;
@class ARBserWriter;

@interface ImDiyalogCoreEntitySignalsOfferSignal : ImDiyalogCoreEntitySignalsAbsSignal

+ (NSString *)TYPE;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)sdp;

- (NSString *)getSdp;

- (NSString *)getType;

- (void)parseSignalWithARBserValues:(ARBserValues *)values;

- (void)serializeSignalWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreEntitySignalsOfferSignal)

inline NSString *ImDiyalogCoreEntitySignalsOfferSignal_get_TYPE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImDiyalogCoreEntitySignalsOfferSignal_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogCoreEntitySignalsOfferSignal, TYPE, NSString *)

FOUNDATION_EXPORT void ImDiyalogCoreEntitySignalsOfferSignal_initWithNSString_(ImDiyalogCoreEntitySignalsOfferSignal *self, NSString *sdp);

FOUNDATION_EXPORT ImDiyalogCoreEntitySignalsOfferSignal *new_ImDiyalogCoreEntitySignalsOfferSignal_initWithNSString_(NSString *sdp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreEntitySignalsOfferSignal *create_ImDiyalogCoreEntitySignalsOfferSignal_initWithNSString_(NSString *sdp);

FOUNDATION_EXPORT void ImDiyalogCoreEntitySignalsOfferSignal_init(ImDiyalogCoreEntitySignalsOfferSignal *self);

FOUNDATION_EXPORT ImDiyalogCoreEntitySignalsOfferSignal *new_ImDiyalogCoreEntitySignalsOfferSignal_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreEntitySignalsOfferSignal *create_ImDiyalogCoreEntitySignalsOfferSignal_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreEntitySignalsOfferSignal)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntitySignalsOfferSignal")