//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/contacts/entity/BookImportStorage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesContactsEntityBookImportStorage")
#ifdef RESTRICT_ImDiyalogCoreModulesContactsEntityBookImportStorage
#define INCLUDE_ALL_ImDiyalogCoreModulesContactsEntityBookImportStorage 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesContactsEntityBookImportStorage 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesContactsEntityBookImportStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesContactsEntityBookImportStorage_) && (INCLUDE_ALL_ImDiyalogCoreModulesContactsEntityBookImportStorage || defined(INCLUDE_ImDiyalogCoreModulesContactsEntityBookImportStorage))
#define ImDiyalogCoreModulesContactsEntityBookImportStorage_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ImDiyalogCoreModulesContactsEntityBookImportStorage : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (jboolean)isImportedWithLong:(jlong)phone;

- (jboolean)isImportedWithNSString:(NSString *)email;

- (void)markAsImportedWithLong:(jlong)phone;

- (void)markAsImportedWithNSString:(NSString *)email;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_STATIC_INIT(ImDiyalogCoreModulesContactsEntityBookImportStorage)

FOUNDATION_EXPORT void ImDiyalogCoreModulesContactsEntityBookImportStorage_init(ImDiyalogCoreModulesContactsEntityBookImportStorage *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesContactsEntityBookImportStorage *new_ImDiyalogCoreModulesContactsEntityBookImportStorage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesContactsEntityBookImportStorage *create_ImDiyalogCoreModulesContactsEntityBookImportStorage_init();

FOUNDATION_EXPORT void ImDiyalogCoreModulesContactsEntityBookImportStorage_initWithByteArray_(ImDiyalogCoreModulesContactsEntityBookImportStorage *self, IOSByteArray *data);

FOUNDATION_EXPORT ImDiyalogCoreModulesContactsEntityBookImportStorage *new_ImDiyalogCoreModulesContactsEntityBookImportStorage_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesContactsEntityBookImportStorage *create_ImDiyalogCoreModulesContactsEntityBookImportStorage_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesContactsEntityBookImportStorage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesContactsEntityBookImportStorage")
