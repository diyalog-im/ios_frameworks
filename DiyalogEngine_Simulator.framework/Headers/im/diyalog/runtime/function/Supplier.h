//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/function/Supplier.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeFunctionSupplier")
#ifdef RESTRICT_ImDiyalogRuntimeFunctionSupplier
#define INCLUDE_ALL_ImDiyalogRuntimeFunctionSupplier 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeFunctionSupplier 1
#endif
#undef RESTRICT_ImDiyalogRuntimeFunctionSupplier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARSupplier_) && (INCLUDE_ALL_ImDiyalogRuntimeFunctionSupplier || defined(INCLUDE_ARSupplier))
#define ARSupplier_

@protocol ARSupplier < NSObject, JavaObject >

- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(ARSupplier)

J2OBJC_TYPE_LITERAL_HEADER(ARSupplier)

#define ImDiyalogRuntimeFunctionSupplier ARSupplier

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeFunctionSupplier")