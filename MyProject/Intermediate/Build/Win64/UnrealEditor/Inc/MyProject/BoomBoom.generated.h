// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_BoomBoom_generated_h
#error "BoomBoom.generated.h already included, missing '#pragma once' in BoomBoom.h"
#endif
#define MYPROJECT_BoomBoom_generated_h

#define FID_MyProject_Source_MyProject_BoomBoom_h_16_SPARSE_DATA
#define FID_MyProject_Source_MyProject_BoomBoom_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execmove); \
	DECLARE_FUNCTION(execUpdateRotation); \
	DECLARE_FUNCTION(execUpdateAnimation);


#define FID_MyProject_Source_MyProject_BoomBoom_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execmove); \
	DECLARE_FUNCTION(execUpdateRotation); \
	DECLARE_FUNCTION(execUpdateAnimation);


#define FID_MyProject_Source_MyProject_BoomBoom_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoomBoom(); \
	friend struct Z_Construct_UClass_ABoomBoom_Statics; \
public: \
	DECLARE_CLASS(ABoomBoom, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABoomBoom)


#define FID_MyProject_Source_MyProject_BoomBoom_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABoomBoom(); \
	friend struct Z_Construct_UClass_ABoomBoom_Statics; \
public: \
	DECLARE_CLASS(ABoomBoom, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABoomBoom)


#define FID_MyProject_Source_MyProject_BoomBoom_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoomBoom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoomBoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoomBoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoomBoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoomBoom(ABoomBoom&&); \
	NO_API ABoomBoom(const ABoomBoom&); \
public:


#define FID_MyProject_Source_MyProject_BoomBoom_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoomBoom(ABoomBoom&&); \
	NO_API ABoomBoom(const ABoomBoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoomBoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoomBoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoomBoom)


#define FID_MyProject_Source_MyProject_BoomBoom_h_13_PROLOG
#define FID_MyProject_Source_MyProject_BoomBoom_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_BoomBoom_h_16_SPARSE_DATA \
	FID_MyProject_Source_MyProject_BoomBoom_h_16_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_BoomBoom_h_16_INCLASS \
	FID_MyProject_Source_MyProject_BoomBoom_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_BoomBoom_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_BoomBoom_h_16_SPARSE_DATA \
	FID_MyProject_Source_MyProject_BoomBoom_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_BoomBoom_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_BoomBoom_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABoomBoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_BoomBoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
