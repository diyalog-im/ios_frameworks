//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/files/OutputFile.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeFilesOutputFile")
#ifdef RESTRICT_ImDiyalogRuntimeFilesOutputFile
#define INCLUDE_ALL_ImDiyalogRuntimeFilesOutputFile 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeFilesOutputFile 1
#endif
#undef RESTRICT_ImDiyalogRuntimeFilesOutputFile

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AROutputFile_) && (INCLUDE_ALL_ImDiyalogRuntimeFilesOutputFile || defined(INCLUDE_AROutputFile))
#define AROutputFile_

@class IOSByteArray;

@protocol AROutputFile < NSObject, JavaObject >

- (jboolean)writeWithOffset:(jint)fileOffset
                   withData:(IOSByteArray *)data
             withDataOffset:(jint)dataOffset
                 withLength:(jint)dataLen;

- (jboolean)close;

@end

J2OBJC_EMPTY_STATIC_INIT(AROutputFile)

J2OBJC_TYPE_LITERAL_HEADER(AROutputFile)

#define ImDiyalogRuntimeFilesOutputFile AROutputFile

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeFilesOutputFile")
