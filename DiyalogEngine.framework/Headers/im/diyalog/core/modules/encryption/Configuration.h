//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/encryption/Configuration.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionConfiguration")
#ifdef RESTRICT_ImDiyalogCoreModulesEncryptionConfiguration
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionConfiguration 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionConfiguration 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesEncryptionConfiguration

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesEncryptionConfiguration_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionConfiguration || defined(INCLUDE_ImDiyalogCoreModulesEncryptionConfiguration))
#define ImDiyalogCoreModulesEncryptionConfiguration_

@class JavaUtilArrayList;

@interface ImDiyalogCoreModulesEncryptionConfiguration : NSObject

+ (jint)EPHEMERAL_KEYS_COUNT;

+ (JavaUtilArrayList *)SUPPORTED;

@end

J2OBJC_STATIC_INIT(ImDiyalogCoreModulesEncryptionConfiguration)

inline jint ImDiyalogCoreModulesEncryptionConfiguration_get_EPHEMERAL_KEYS_COUNT();
#define ImDiyalogCoreModulesEncryptionConfiguration_EPHEMERAL_KEYS_COUNT 100
J2OBJC_STATIC_FIELD_CONSTANT(ImDiyalogCoreModulesEncryptionConfiguration, EPHEMERAL_KEYS_COUNT, jint)

inline JavaUtilArrayList *ImDiyalogCoreModulesEncryptionConfiguration_get_SUPPORTED();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilArrayList *ImDiyalogCoreModulesEncryptionConfiguration_SUPPORTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogCoreModulesEncryptionConfiguration, SUPPORTED, JavaUtilArrayList *)

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionConfiguration)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionConfiguration")
