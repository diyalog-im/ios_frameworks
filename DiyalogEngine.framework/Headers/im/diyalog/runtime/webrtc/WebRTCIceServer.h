//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/webrtc/WebRTCIceServer.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCIceServer")
#ifdef RESTRICT_ImDiyalogRuntimeWebrtcWebRTCIceServer
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCIceServer 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCIceServer 1
#endif
#undef RESTRICT_ImDiyalogRuntimeWebrtcWebRTCIceServer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARWebRTCIceServer_) && (INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCIceServer || defined(INCLUDE_ARWebRTCIceServer))
#define ARWebRTCIceServer_

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief WebRTC Ice Server
 */
@interface ARWebRTCIceServer : NSObject
@property (readonly, copy, nonatomic, getter=getUrl) NSString *url;
@property (readonly, copy, nonatomic, getter=getUsername) NSString *username;
@property (readonly, copy, nonatomic, getter=getCredential) NSString *credential;

#pragma mark Public

/*!
 @brief Constructor for non-authenticated ICE server
 @param url url for server
 */
- (instancetype)initWithUrl:(NSString * __nonnull)url;

/*!
 @brief Default Constructor for ICE server
 @param url        url for server
 @param username   optional username for server
 @param credential optional credential for server
 */
- (instancetype)initWithUrl:(NSString * __nonnull)url
               withUserName:(NSString * __nullable)username
             withCredential:(NSString * __nullable)credential;

/*!
 @brief Get Optional credential for server
 @return credential
 */
- (NSString * __nullable)getCredential;

/*!
 @brief Get URL to server
 @return url
 */
- (NSString * __nonnull)getUrl;

/*!
 @brief Get Optional username for server
 @return username
 */
- (NSString * __nullable)getUsername;

@end

J2OBJC_EMPTY_STATIC_INIT(ARWebRTCIceServer)

FOUNDATION_EXPORT void ARWebRTCIceServer_initWithUrl_withUserName_withCredential_(ARWebRTCIceServer *self, NSString *url, NSString *username, NSString *credential);

FOUNDATION_EXPORT ARWebRTCIceServer *new_ARWebRTCIceServer_initWithUrl_withUserName_withCredential_(NSString *url, NSString *username, NSString *credential) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARWebRTCIceServer *create_ARWebRTCIceServer_initWithUrl_withUserName_withCredential_(NSString *url, NSString *username, NSString *credential);

FOUNDATION_EXPORT void ARWebRTCIceServer_initWithUrl_(ARWebRTCIceServer *self, NSString *url);

FOUNDATION_EXPORT ARWebRTCIceServer *new_ARWebRTCIceServer_initWithUrl_(NSString *url) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARWebRTCIceServer *create_ARWebRTCIceServer_initWithUrl_(NSString *url);

J2OBJC_TYPE_LITERAL_HEADER(ARWebRTCIceServer)

@compatibility_alias ImDiyalogRuntimeWebrtcWebRTCIceServer ARWebRTCIceServer;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeWebrtcWebRTCIceServer")