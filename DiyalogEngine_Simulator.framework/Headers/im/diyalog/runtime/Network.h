//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/Network.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeNetwork")
#ifdef RESTRICT_ImDiyalogRuntimeNetwork
#define INCLUDE_ALL_ImDiyalogRuntimeNetwork 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeNetwork 1
#endif
#undef RESTRICT_ImDiyalogRuntimeNetwork

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARNetwork_) && (INCLUDE_ALL_ImDiyalogRuntimeNetwork || defined(INCLUDE_ARNetwork))
#define ARNetwork_

@class ARConnectionEndpoint;
@protocol ARConnectionCallback;
@protocol ARCreateConnectionCallback;

/*!
 @brief Created by ex3ndr on 08.08.15.
 */
@interface ARNetwork : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)createConnectionWithInt:(jint)connectionId
                        withInt:(jint)mtprotoVersion
                        withInt:(jint)apiMajorVersion
                        withInt:(jint)apiMinorVersion
       withARConnectionEndpoint:(ARConnectionEndpoint *)endpoint
       withARConnectionCallback:(id<ARConnectionCallback>)callback
 withARCreateConnectionCallback:(id<ARCreateConnectionCallback>)createCallback;

@end

J2OBJC_STATIC_INIT(ARNetwork)

FOUNDATION_EXPORT void ARNetwork_createConnectionWithInt_withInt_withInt_withInt_withARConnectionEndpoint_withARConnectionCallback_withARCreateConnectionCallback_(jint connectionId, jint mtprotoVersion, jint apiMajorVersion, jint apiMinorVersion, ARConnectionEndpoint *endpoint, id<ARConnectionCallback> callback, id<ARCreateConnectionCallback> createCallback);

FOUNDATION_EXPORT void ARNetwork_init(ARNetwork *self);

FOUNDATION_EXPORT ARNetwork *new_ARNetwork_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARNetwork *create_ARNetwork_init();

J2OBJC_TYPE_LITERAL_HEADER(ARNetwork)

@compatibility_alias ImDiyalogRuntimeNetwork ARNetwork;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeNetwork")
